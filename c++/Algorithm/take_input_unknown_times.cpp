void take_inp()
{
   string line;
    int  value;
  int cnt=0;
        
    do
    {
        if (!getline(cin, line) || line.empty())
            break;
        istringstream iss(line);
        while (iss >> value)
            {
              if(cnt!=0)
                cout<<", ";
                cout<<value;
              cnt++;
            }
    }
    while (true);
}