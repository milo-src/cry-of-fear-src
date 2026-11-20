
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10088470 <.text+0x87470>:
10088470:	56                   	push   esi
10088471:	8b f1                	mov    esi,ecx
10088473:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10088476:	c7 80 3c 01 00 00 00 	mov    DWORD PTR [eax+0x13c],0x0
1008847d:	00 00 00 
10088480:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10088483:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
1008848a:	10 
1008848b:	66 0f d6 42 20       	movq   QWORD PTR [edx+0x20],xmm0
10088490:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
10088495:	89 42 28             	mov    DWORD PTR [edx+0x28],eax
10088498:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008849b:	c7 80 08 01 00 00 00 	mov    DWORD PTR [eax+0x108],0x0
100884a2:	00 00 00 
100884a5:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100884a8:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
100884af:	10 
100884b0:	66 0f d6 41 5c       	movq   QWORD PTR [ecx+0x5c],xmm0
100884b5:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
100884ba:	89 41 64             	mov    DWORD PTR [ecx+0x64],eax
100884bd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100884c2:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100884c5:	8b 00                	mov    eax,DWORD PTR [eax]
100884c7:	89 81 38 01 00 00    	mov    DWORD PTR [ecx+0x138],eax
100884cd:	8b ce                	mov    ecx,esi
100884cf:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100884d2:	83 88 18 01 00 00 20 	or     DWORD PTR [eax+0x118],0x20
100884d9:	e8 72 27 00 00       	call   0x1008ac50
100884de:	68 98 ec 1b 10       	push   0x101bec98
100884e3:	6a 01                	push   0x1
100884e5:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100884eb:	83 c4 08             	add    esp,0x8
100884ee:	5e                   	pop    esi
100884ef:	c3                   	ret
