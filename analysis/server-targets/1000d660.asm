
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000d660 <.text+0xc660>:
1000d660:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
1000d663:	8b 82 ec 01 00 00    	mov    eax,DWORD PTR [edx+0x1ec]
1000d669:	89 82 d8 01 00 00    	mov    DWORD PTR [edx+0x1d8],eax
1000d66f:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
1000d672:	f6 82 a4 01 00 00 02 	test   BYTE PTR [edx+0x1a4],0x2
1000d679:	74 2d                	je     0x1000d6a8
1000d67b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000d680:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
1000d686:	8b 82 d8 01 00 00    	mov    eax,DWORD PTR [edx+0x1d8]
1000d68c:	03 c1                	add    eax,ecx
1000d68e:	50                   	push   eax
1000d68f:	8b 82 d0 01 00 00    	mov    eax,DWORD PTR [edx+0x1d0]
1000d695:	03 c1                	add    eax,ecx
1000d697:	50                   	push   eax
1000d698:	68 d8 2a 1a 10       	push   0x101a2ad8
1000d69d:	6a 01                	push   0x1
1000d69f:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000d6a5:	83 c4 10             	add    esp,0x10
1000d6a8:	c3                   	ret
