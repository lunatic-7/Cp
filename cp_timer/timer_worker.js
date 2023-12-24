let time = 0;
let interval;

self.onmessage = function(event) {
    if (event.data.action === 'start') {
        time = event.data.duration; // Set the time based on the difficulty level
        interval = setInterval(updateTimer, 1000);
    } else if (event.data === 'stop') {
        clearInterval(interval);
    }
};

function updateTimer() {
    if (time > 0) {
        time--;
        let minutes = Math.floor(time / 60);
        let seconds = time % 60;
        self.postMessage(`${minutes.toString().padStart(2, '0')}:${seconds.toString().padStart(2, '0')}`);
    } else {
        clearInterval(interval);
        self.postMessage("Datt ja bhai!");
    }
}
