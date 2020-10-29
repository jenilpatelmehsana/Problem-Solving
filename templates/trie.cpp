class TrieDS {

    node *head = new node();

public:

    TrieDS() {
        head -> isWord = false;
    }

    void insert(string s) {
        node *temp = head;
        while((bool)s.size())
        {
            if((temp->m).find(s[0]) == (temp->m).end())
            {
                node *newNode = new node();
                if(s.size() == 1)
                {
                    newNode->isWord = true;
                    (temp->m)[s[0]] = newNode;
                }
                else
                {
                    (temp -> m)[s[0]] = newNode;
                }
            }
            else
            {
                if(s.size() == 1)
                {
                    (temp->m)[s[0]]->isWord = true;
                }
            }
            temp = (temp->m)[s[0]];
            s  = s.substr(1, s.size() - 1);
        }
//        cout<<"insertion successful"<<endl;
    }

    bool findString(string s)
    {
        node* temp = head;
        while(true)
        {
            if (temp == nullptr)
                return false;
            if (s.size() == 0)
                return false;
            if (s.size() == 1)
            {
                return (temp -> m)[s[0]]->isWord == true;
            }
            if ((temp->m).find(s[0]) == (temp->m).end()) {
                return false;
            }
            else
            {
                temp = (temp -> m)[s[0]];
            }
            s = s.substr(1 , s.size() - 1);
        }
    }

    void print() {
        node* temp = head;
        for(auto x : (temp->m))
        {
            cout<<x.first<<" ";
        }
        cout<<endl;
    }

};

