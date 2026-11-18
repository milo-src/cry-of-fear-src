/* CoF engine input serialization, included inside the prepared console.c. */
static void CofChatSanitize(char* text)
{
    /* A byte-based UTF-8 field can hit the 120-byte limit mid-codepoint. */
    int length = Q_strlen(text), start = length;
    while(start > 0 && ((unsigned char)text[start-1] & 0xc0) == 0x80) --start;
    if(start > 0)
    {
        --start;
        unsigned lead = (unsigned char)text[start];
        int expected = lead >= 0xc2 && lead <= 0xdf ? 2 : lead >= 0xe0 && lead <= 0xef ? 3 : lead >= 0xf0 && lead <= 0xf4 ? 4 : 1;
        if(length-start < expected) text[start] = 0;
    }
    /* Native semicolon substitution, plus safe quoting for the host parser. */
    for(char* p=text;*p;++p)
    {
        if(*p==';') *p=',';
        else if(*p=='"') *p=39;
        else if((unsigned char)*p<32) *p=' ';
    }
}
