string timeConversion(string s) {
    
    string hr = s.substr(0,2); 
    int ihr =  stoi(hr);
    
    if(s[8] == 'A')
    {
        if(ihr == 12)
        {
            hr = "00";
        }
    }else if(s[8] == 'P')
    {
        if(ihr < 12)
        {
            ihr += 12;
            hr = (ihr < 10 ? "0" : "") + to_string(ihr);
        }
    }
    
    return hr + s.substr(2,6); 

}