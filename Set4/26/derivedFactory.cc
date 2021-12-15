Base **derivedFactory(size_t size)
{
    Base **array = new Base *[size];
    
    for (size_t idx = 0; idx < size; ++idx)
    {
        array[idx] = new Derived{};
    }
    
    return array;
}
