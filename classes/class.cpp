class Organizations
{
    public:
    char Name[20];
    int Founders;
    char Founders[20];
    char Contact_info[500];
    char Head_office[20];
    char Foundation_Date[8];
    int employees;
    char laws[1000];
    int tax_percent;
    virtual bool isOrg(int Founders)
    {
        return true;
    }
};

class LLC : public Organizations
{
    public:
     bool isOrg(int Founder) override 
    {
        if(Founder < 2)
            return false;
        return true;
    }
    int Offices;
    int Share_Value;
    
};

class Fund : public Organizations
{
    char fund_type[20];
    int fund_budget;
    char advertisers[1000];
    char purpose[1000];
    char history[2000];
};

class CJSC : public Organizations
{
    bool isOrg(int Founders) override
    {
        if(Founders<2 or Founders>49)
            return false;
        return true;
    }
};

class NGO : public Organizations
{
    public:
    char mission[1000];
    char projects[1000];
    char beneficiaries[1000];
};
