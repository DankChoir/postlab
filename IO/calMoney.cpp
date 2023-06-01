#include <fstream>
#include <unordered_map>
#include <sstream>

void calMoney(string priceFile, string buyFile) {
    unordered_map<int, int> priceMap;
    ifstream priceStream(priceFile);
    int n;
    priceStream >> n;
    for (int i = 0; i < n; i++) {
        int id, price;
        priceStream >> id >> price;
        priceMap[id] = price;
    }
    priceStream.close();

    ifstream buyStream(buyFile);
    int m;
    buyStream >> m;
    string line;
    getline(buyStream, line); // discard the rest of the first line
    for (int i = 0; i < m; i++) {
        getline(buyStream, line);
        stringstream ss(line);
        string name;
        ss >> name;
        int total = 0;
        while (true) {
            int id, quantity;
            ss >> id;
            if (ss.eof()) break;
            ss >> quantity;
            total += priceMap[id] * quantity;
        }
        cout << name << ' ' << total << '\n';
    }
    buyStream.close();
}
