
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100abf60 <.text+0xaaf60>:
100abf60:	56                   	push   esi
100abf61:	8b f1                	mov    esi,ecx
100abf63:	8b 06                	mov    eax,DWORD PTR [esi]
100abf65:	ff 90 68 01 00 00    	call   DWORD PTR [eax+0x168]
100abf6b:	39 86 18 02 00 00    	cmp    DWORD PTR [esi+0x218],eax
100abf71:	74 10                	je     0x100abf83
100abf73:	c7 86 74 03 00 00 00 	mov    DWORD PTR [esi+0x374],0x0
100abf7a:	00 00 00 
100abf7d:	89 86 18 02 00 00    	mov    DWORD PTR [esi+0x218],eax
100abf83:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100abf86:	c7 40 58 00 00 00 00 	mov    DWORD PTR [eax+0x58],0x0
100abf8d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100abf90:	c7 40 50 00 00 00 00 	mov    DWORD PTR [eax+0x50],0x0
100abf97:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
100abf9e:	10 
100abf9f:	66 0f d6 86 68 03 00 	movq   QWORD PTR [esi+0x368],xmm0
100abfa6:	00 
100abfa7:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
100abfac:	89 86 70 03 00 00    	mov    DWORD PTR [esi+0x370],eax
100abfb2:	5e                   	pop    esi
100abfb3:	c3                   	ret
