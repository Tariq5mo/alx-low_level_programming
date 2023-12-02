/**
 * _printf - like printf
 *
 * @format: The not ready string
 * Return: The number of chataters
 */
int _printf(const char *format, ...)
{
        int i, len_buf, size_buf;
        spe *spes; // Declare a pointer to an array of structures
        char *buffer, *ptrb;
        va_list ar;

        if (!format)
                return (0);

        size_buf = 1024;
        buffer = malloc(sizeof(char)  *  size_buf);
        if (buffer == NULL)
                return (0);

        ptrb = buffer;
        va_start(ar, format);

        // Initialize the pointer to the array of structures
        init_spes(&spes);

        for (; *format != '\0'; format++, ptrb++)
        {
                len_buf = ptrb - buffer;
                if (len_buf == size_buf - 1)
                        ptrb = change_len(&size_buf, ptrb, buffer, len_buf);
                if (*format == '%')
                {
                        format++;
                        for (i = 0; spes[i].spe_char; i++)
                                if (*format == spes[i].spe_char[0])
                                        ptrb = spes[i].func(ptrb, &ar);
                }
                else
                        *ptrb = *format;
        }
        *ptrb = '\0';
        write(1, buffer, i = _strlen(buffer));
        va_end(ar);

        // Free the memory allocated for the array of structures
        free(spes);

        free(buffer);
        return (i);
}

// Define the function that initializes the array of structures
void init_spes(spe **spes)
{
        // Allocate memory for the array of structures
        *spes = malloc(sizeof(spe) * NUM_SPECS);

        // Check if the allocation was successful
        if (*spes == NULL)
                return;

        // Initialize the array of structures with the format specifiers and their corresponding functions
        (*spes)[0].spe_char = "s";
        (*spes)[0].func = p_string;
        (*spes)[1].spe_char = "%";
        (*spes)[1].func = _percent;
        (*spes)[2].spe_char = "c";
        (*spes)[2].func = p_char;
        // Add more format specifiers and functions here
}
/**
 * _printf - like printf
 *
 * @format: The not ready string
 * Return: The number of chataters
 */
int _printf(const char *format, ...)
{
        int i, len_buf, size_buf;
        spe *spes; // Declare a pointer to an array of structures
        char *buffer, *ptrb;
        va_list ar;

        if (!format)
                return (0);

        size_buf = 1024;
        buffer = malloc(sizeof(char)  *  size_buf);
        if (buffer == NULL)
                return (0);

        ptrb = buffer;
        va_start(ar, format);

        // Initialize the pointer to the array of structures
        init_spes(&spes);

        for (; *format != '\0'; format++, ptrb++)
        {
                len_buf = ptrb - buffer;
                if (len_buf == size_buf - 1)
                        ptrb = change_len(&size_buf, ptrb, buffer, len_buf);
                if (*format == '%')
                {
                        format++;
                        for (i = 0; spes[i].spe_char; i++)
                                if (*format == spes[i].spe_char[0])
                                        ptrb = spes[i].func(ptrb, &ar);
                }
                else
                        *ptrb = *format;
        }
        *ptrb = '\0';
        write(1, buffer, i = _strlen(buffer));
        va_end(ar);

        // Free the memory allocated for the array of structures
        free(spes);

        free(buffer);
        return (i);
}

// Define the function that initializes the array of structures
void init_spes(spe **spes)
{
        // Allocate memory for the array of structures
        *spes = malloc(sizeof(spe) * NUM_SPECS);

        // Check if the allocation was successful
        if (*spes == NULL)
                return;

        // Initialize the array of structures with the format specifiers and their corresponding functions
        (*spes)[0].spe_char = "s";
        (*spes)[0].func = p_string;
        (*spes)[1].spe_char = "%";
        (*spes)[1].func = _percent;
        (*spes)[2].spe_char = "c";
        (*spes)[2].func = p_char;
        // Add more format specifiers and functions here
}
