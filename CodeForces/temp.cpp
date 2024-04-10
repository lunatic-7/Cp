#include <map>
#include <iostream>
#include <limits>

template<typename K, typename V>
class interval_map {
public:
    interval_map(V const& val)
        : m_valBegin(val) {}

    void assign(K const& keyBegin, K const& keyEnd, V const& val) {
        // Check if the interval is valid
        if (!(keyBegin < keyEnd)) return; // Empty interval, do nothing

        // Find the entry that ends at or after keyBegin
        auto itBegin = m_map.lower_bound(keyBegin);

        // Adjust the beginning of the interval if necessary
        if (itBegin != m_map.begin()) {
            auto itPrev = std::prev(itBegin);
            if (itPrev->second == val && itPrev->first >= keyBegin) {
                --itBegin;
            }
        }

        // Find the entry that starts after keyEnd
        auto itEnd = m_map.upper_bound(keyEnd);

        // Adjust the end of the interval if necessary
        if (itEnd != m_map.begin()) {
            auto itPrev = std::prev(itEnd);
            if (itPrev->second == val && itPrev->first == keyEnd) {
                --itEnd;
            }
        }

        // Erase entries within the interval
        m_map.erase(itBegin, itEnd);

        // Insert new interval if necessary
        if (val != m_valBegin) {
            m_map[keyBegin] = val;
            if (keyEnd < std::numeric_limits<K>::max()) {
                m_map[keyEnd] = val;
            }
        }
    }

    V const& operator[](K const& key) const {
        auto it = m_map.upper_bound(key);
        if (it == m_map.begin()) {
            return m_valBegin;
        } else {
            return (--it)->second;
        }
    }

private:
    std::map<K, V> m_map;
    V m_valBegin;
};

int main() {
    interval_map<int, char> M('A');
    std::cout << M[-2] << M[-1] << M[0] << M[1] << M[2] << M[3] << M[4] << "\n";
    M.assign(1, 3, 'B');
    std::cout << M[-2] << M[-1] << M[0] << M[1] << M[2] << M[3] << M[4] << "\n";

    return 0;
}
