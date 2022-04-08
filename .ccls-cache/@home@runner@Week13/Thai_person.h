class Thai_person
{
	private: 
		long nat_id;
	public: 
		Thai_person(int=0);
    ~Thai_person();
    void display_natid();
};

Thai_person::Thai_person(int x)
{
  cout<<"============="<<endl;
  nat_id = x;
  cout<<"Thai person constructor "<<nat_id<<endl;
}

Thai_person::~Thai_person()
{
 cout<<"Destructor Thai person "<<nat_id<<endl;
}

void Thai_person::display_natid()
{
  cout<<"Nat_id:"<<nat_id<<endl;
}