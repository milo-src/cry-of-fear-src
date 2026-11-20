
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011b640 <.text+0x11a640>:
1011b640:	55                   	push   ebp
1011b641:	8b ec                	mov    ebp,esp
1011b643:	56                   	push   esi
1011b644:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
1011b647:	85 f6                	test   esi,esi
1011b649:	74 4c                	je     0x1011b697
1011b64b:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
1011b64e:	09 05 3c 1f 23 10    	or     DWORD PTR ds:0x10231f3c,eax
1011b654:	3b 35 34 1f 23 10    	cmp    esi,DWORD PTR ds:0x10231f34
1011b65a:	74 26                	je     0x1011b682
1011b65c:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1011b65f:	50                   	push   eax
1011b660:	50                   	push   eax
1011b661:	e8 8a 02 00 00       	call   0x1011b8f0
1011b666:	0f 57 c0             	xorps  xmm0,xmm0
1011b669:	89 35 34 1f 23 10    	mov    DWORD PTR ds:0x10231f34,esi
1011b66f:	f3 0f 58 45 10       	addss  xmm0,DWORD PTR [ebp+0x10]
1011b674:	83 c4 08             	add    esp,0x8
1011b677:	f3 0f 11 05 38 1f 23 	movss  DWORD PTR ds:0x10231f38,xmm0
1011b67e:	10 
1011b67f:	5e                   	pop    esi
1011b680:	5d                   	pop    ebp
1011b681:	c3                   	ret
1011b682:	f3 0f 10 05 38 1f 23 	movss  xmm0,DWORD PTR ds:0x10231f38
1011b689:	10 
1011b68a:	f3 0f 58 45 10       	addss  xmm0,DWORD PTR [ebp+0x10]
1011b68f:	f3 0f 11 05 38 1f 23 	movss  DWORD PTR ds:0x10231f38,xmm0
1011b696:	10 
1011b697:	5e                   	pop    esi
1011b698:	5d                   	pop    ebp
1011b699:	c3                   	ret
