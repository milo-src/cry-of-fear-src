
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10053060 <.text+0x52060>:
10053060:	8b 81 60 01 00 00    	mov    eax,DWORD PTR [ecx+0x160]
10053066:	f6 80 d0 05 00 00 01 	test   BYTE PTR [eax+0x5d0],0x1
1005306d:	74 3c                	je     0x100530ab
1005306f:	c7 80 98 1e 00 00 00 	mov    DWORD PTR [eax+0x1e98],0x0
10053076:	00 00 00 
10053079:	8b 91 60 01 00 00    	mov    edx,DWORD PTR [ecx+0x160]
1005307f:	8b 82 d0 05 00 00    	mov    eax,DWORD PTR [edx+0x5d0]
10053085:	a8 02                	test   al,0x2
10053087:	74 0f                	je     0x10053098
10053089:	83 c8 02             	or     eax,0x2
1005308c:	89 82 d0 05 00 00    	mov    DWORD PTR [edx+0x5d0],eax
10053092:	8b 91 60 01 00 00    	mov    edx,DWORD PTR [ecx+0x160]
10053098:	8b 82 d0 05 00 00    	mov    eax,DWORD PTR [edx+0x5d0]
1005309e:	a8 01                	test   al,0x1
100530a0:	74 09                	je     0x100530ab
100530a2:	83 c8 01             	or     eax,0x1
100530a5:	89 82 d0 05 00 00    	mov    DWORD PTR [edx+0x5d0],eax
100530ab:	c3                   	ret
