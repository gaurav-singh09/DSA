display(v1);
    int k;
    cout<<"Enter the value of K : "<<endl;
    cin>>k;
    if(k>v1.size()) k=k%v1.size();
   

    reversePart(0,v1.size()-k-1,v1); //1 14 15 12 15 17 18 19 143 153
    reversePart(v1.size()-k,v1.size()-1,v1);
    reversePart(0,v1.size()-1,v1);

    display(v1);