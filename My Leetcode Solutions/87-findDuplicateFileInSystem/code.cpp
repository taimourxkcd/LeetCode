class Solution
{
public:
    vector<vector<string>> findDuplicate(vector<string> &paths)
    {
        unordered_map<string, vector<string>> map;

        for (string path : paths)
        {
            int i = 0;
            string dirName = "";
            while (i < path.size() && path[i] != ' ')
            {
                dirName += path[i];
                i++;
            }
            i++;

            while (i < path.size())
            {
                string fileName = "";
                while (i < path.size() && path[i] != '.')
                {
                    fileName += path[i];
                    i++;
                }
                i += 5;

                string contents = "";
                while (i < path.size() && path[i] != ' ')
                {
                    contents += path[i];
                    i++;
                }
                contents.pop_back();
                map[contents].push_back(dirName + "/" + fileName + ".txt");
                i++;
            }
        }
        vector<vector<string>> res;
        for (auto it : map)
        {
            if (it.second.size() > 1)
                res.push_back(it.second);
        }
        return res;
    }
};