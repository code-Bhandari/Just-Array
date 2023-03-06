
vector<int> rotateLeft(int d, vector<int> a) {
    vector<int> result;
    for (auto it =a.begin()+d; it != a.end();++it)
        result.push_back(*it);
    
    for (auto it =a.begin(); it != a.begin()+d;++it)
        result.push_back(*it);
    return result;

}
