
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10100820 <.text+0xff820>:
10100820:	55                   	push   ebp
10100821:	8b ec                	mov    ebp,esp
10100823:	8b 0d 70 0d 23 10    	mov    ecx,DWORD PTR ds:0x10230d70
10100829:	85 c9                	test   ecx,ecx
1010082b:	0f 84 84 00 00 00    	je     0x101008b5
10100831:	56                   	push   esi
10100832:	e8 49 fe ff ff       	call   0x10100680
10100837:	8b f0                	mov    esi,eax
10100839:	83 fe ff             	cmp    esi,0xffffffff
1010083c:	75 13                	jne    0x10100851
1010083e:	68 e0 ee 1d 10       	push   0x101deee0
10100843:	6a 01                	push   0x1
10100845:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1010084b:	83 c4 08             	add    esp,0x8
1010084e:	5e                   	pop    esi
1010084f:	5d                   	pop    ebp
10100850:	c3                   	ret
10100851:	8b 0d 70 0d 23 10    	mov    ecx,DWORD PTR ds:0x10230d70
10100857:	8b d6                	mov    edx,esi
10100859:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1010085c:	c1 e2 05             	shl    edx,0x5
1010085f:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
10100863:	66 0f d6 84 0a ec 00 	movq   QWORD PTR [edx+ecx*1+0xec],xmm0
1010086a:	00 00 
1010086c:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
1010086f:	89 84 0a f4 00 00 00 	mov    DWORD PTR [edx+ecx*1+0xf4],eax
10100876:	8b 0d 70 0d 23 10    	mov    ecx,DWORD PTR ds:0x10230d70
1010087c:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1010087f:	89 84 0a f8 00 00 00 	mov    DWORD PTR [edx+ecx*1+0xf8],eax
10100886:	8b 0d 70 0d 23 10    	mov    ecx,DWORD PTR ds:0x10230d70
1010088c:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1010088f:	89 84 0a fc 00 00 00 	mov    DWORD PTR [edx+ecx*1+0xfc],eax
10100896:	8d 4e 08             	lea    ecx,[esi+0x8]
10100899:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1010089e:	c1 e1 05             	shl    ecx,0x5
101008a1:	5e                   	pop    esi
101008a2:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
101008a6:	f3 0f 58 45 14       	addss  xmm0,DWORD PTR [ebp+0x14]
101008ab:	a1 70 0d 23 10       	mov    eax,ds:0x10230d70
101008b0:	f3 0f 11 04 01       	movss  DWORD PTR [ecx+eax*1],xmm0
101008b5:	5d                   	pop    ebp
101008b6:	c3                   	ret
