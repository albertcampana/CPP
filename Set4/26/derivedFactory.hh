Base **derivedFactory(size_t size)
{
    Base* array = new Derived[size];
    
    for (size_t idx = 0; idx < size; ++idx)
    {
        Derived derived = Derived();
        array[idx] = derived;
    }
    
    Base** arrayBase = &array;
    
    return arrayBase;
}
