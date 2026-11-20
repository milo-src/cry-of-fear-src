
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bf8c0 <.text+0xbe8c0>:
100bf8c0:	55                   	push   ebp
100bf8c1:	8b ec                	mov    ebp,esp
100bf8c3:	8b 91 bc 02 00 00    	mov    edx,DWORD PTR [ecx+0x2bc]
100bf8c9:	8b c2                	mov    eax,edx
100bf8cb:	0f 10 81 98 02 00 00 	movups xmm0,XMMWORD PTR [ecx+0x298]
100bf8d2:	03 c0                	add    eax,eax
100bf8d4:	03 d2                	add    edx,edx
100bf8d6:	56                   	push   esi
100bf8d7:	8b b4 c1 44 02 00 00 	mov    esi,DWORD PTR [ecx+eax*8+0x244]
100bf8de:	0f 11 81 a8 02 00 00 	movups XMMWORD PTR [ecx+0x2a8],xmm0
100bf8e5:	81 e6 7f fe ff ff    	and    esi,0xfffffe7f
100bf8eb:	0f 10 81 88 02 00 00 	movups xmm0,XMMWORD PTR [ecx+0x288]
100bf8f2:	0b 75 14             	or     esi,DWORD PTR [ebp+0x14]
100bf8f5:	0f 11 81 98 02 00 00 	movups XMMWORD PTR [ecx+0x298],xmm0
100bf8fc:	0f 10 81 78 02 00 00 	movups xmm0,XMMWORD PTR [ecx+0x278]
100bf903:	0f 11 81 88 02 00 00 	movups XMMWORD PTR [ecx+0x288],xmm0
100bf90a:	0f 10 81 68 02 00 00 	movups xmm0,XMMWORD PTR [ecx+0x268]
100bf911:	0f 11 81 78 02 00 00 	movups XMMWORD PTR [ecx+0x278],xmm0
100bf918:	0f 10 81 58 02 00 00 	movups xmm0,XMMWORD PTR [ecx+0x258]
100bf91f:	0f 11 81 68 02 00 00 	movups XMMWORD PTR [ecx+0x268],xmm0
100bf926:	0f 10 81 48 02 00 00 	movups xmm0,XMMWORD PTR [ecx+0x248]
100bf92d:	0f 11 81 58 02 00 00 	movups XMMWORD PTR [ecx+0x258],xmm0
100bf934:	0f 10 81 38 02 00 00 	movups xmm0,XMMWORD PTR [ecx+0x238]
100bf93b:	0f 11 81 48 02 00 00 	movups XMMWORD PTR [ecx+0x248],xmm0
100bf942:	f3 0f 7e 45 08       	movq   xmm0,QWORD PTR [ebp+0x8]
100bf947:	66 0f d6 84 d1 38 02 	movq   QWORD PTR [ecx+edx*8+0x238],xmm0
100bf94e:	00 00 
100bf950:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
100bf953:	89 84 d1 40 02 00 00 	mov    DWORD PTR [ecx+edx*8+0x240],eax
100bf95a:	8b 81 bc 02 00 00    	mov    eax,DWORD PTR [ecx+0x2bc]
100bf960:	03 c0                	add    eax,eax
100bf962:	89 b4 c1 44 02 00 00 	mov    DWORD PTR [ecx+eax*8+0x244],esi
100bf969:	5e                   	pop    esi
100bf96a:	5d                   	pop    ebp
100bf96b:	c2 10 00             	ret    0x10
