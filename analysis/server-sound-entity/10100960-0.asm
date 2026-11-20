
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10100960 <.text+0xff960>:
10100960:	56                   	push   esi
10100961:	8b f1                	mov    esi,ecx
10100963:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10100966:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
1010096d:	00 00 00 
10100970:	e8 bb fd ff ff       	call   0x10100730
10100975:	8b 06                	mov    eax,DWORD PTR [esi]
10100977:	51                   	push   ecx
10100978:	8b ce                	mov    ecx,esi
1010097a:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10100981:	ff 50 08             	call   DWORD PTR [eax+0x8]
10100984:	5e                   	pop    esi
10100985:	c3                   	ret
