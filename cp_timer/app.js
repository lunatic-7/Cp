// Function to save a link using API
function saveLink() {
    var title = document.getElementById('linkTitle').value;
    var url = document.getElementById('linkUrl').value;

    if (title && url) {
        fetch('https://wasif.pythonanywhere.com/api/links/save/', {
            method: 'POST',
            headers: {
                'Content-Type': 'application/json',
            },
            body: JSON.stringify({
                title: title,
                url: url,
            }),
        })
        .then(response => response.json())
        .then(data => {
            console.log('Link saved:', data);
            displaySavedLinks();
            document.getElementById('linkTitle').value = '';
            document.getElementById('linkUrl').value = '';
        })
        .catch(error => console.error('Error saving link:', error));
    }
}

// Function to delete a link using API
function deleteLink(linkId) {
    fetch(`https://wasif.pythonanywhere.com/api/links/delete/${linkId}/`, {
        method: 'DELETE',
    })
    .then(response => {
        if (!response.ok) {
            throw new Error('Network response was not ok');
        }
        console.log('Link deleted');
        displaySavedLinks();
    })
    .catch(error => console.error('Error deleting link:', error));
}

// Function to display saved links from API
function displaySavedLinks() {
    fetch('https://wasif.pythonanywhere.com/api/links/')
        .then(response => response.json())
        .then(data => {
            var savedLinksList = document.getElementById('savedLinks');
            savedLinksList.innerHTML = '';

            data.reverse().forEach(function(link) {
                var listItem = document.createElement('li');
                listItem.innerHTML = `
                    <a href="${link.url}" target="_blank">${link.title}</a>
                    <button class="pro_btn" ${isLoggedIn ? '' : 'style="display: none;"'} onclick="deleteLink(${link.id})"><i class="fa-solid fa-trash"></i></button>
                `;
                savedLinksList.appendChild(listItem);
            });
        })
        .catch(error => console.error('Error fetching saved links:', error));
}

// Display saved links on page load
window.onload = function() {
    displaySavedLinks();
};

// Listen for the custom event indicating a change in the loggedIn state
document.addEventListener('loggedInStateChanged', (event) => {
    isLoggedIn = event.detail.isLoggedIn;
    displaySavedLinks();
});