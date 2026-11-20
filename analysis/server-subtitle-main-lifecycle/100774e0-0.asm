
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100774e0 <.text+0x764e0>:
100774e0:	56                   	push   esi
100774e1:	8b f1                	mov    esi,ecx
100774e3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100774e6:	83 c0 08             	add    eax,0x8
100774e9:	50                   	push   eax
100774ea:	56                   	push   esi
100774eb:	e8 f0 2a 0a 00       	call   0x10119fe0
100774f0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100774f3:	83 c4 08             	add    esp,0x8
100774f6:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
100774fd:	00 00 00 
10077500:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10077503:	c7 80 18 01 00 00 80 	mov    DWORD PTR [eax+0x118],0x80
1007750a:	00 00 00 
1007750d:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10077510:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
10077517:	10 
10077518:	5e                   	pop    esi
10077519:	66 0f d6 41 74       	movq   QWORD PTR [ecx+0x74],xmm0
1007751e:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
10077523:	89 41 7c             	mov    DWORD PTR [ecx+0x7c],eax
10077526:	c3                   	ret
