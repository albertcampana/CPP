Base **derivedFactory(size_t size)
{
    Derived array[size];
    Base* arrayPointers[size];
    Base** arrayBase[size] = &arrayPointers;
    
    for (size_t idx = 0; idx < size; ++idx)
    {
        arrayPointers[idx] = &array[idx];
        arrayBase[idx] = &arrayPointers[idx];
    }
    
    return arrayPointers;
}
