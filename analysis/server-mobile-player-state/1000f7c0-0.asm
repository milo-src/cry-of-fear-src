
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000f7c0 <.text+0xe7c0>:
1000f7c0:	55                   	push   ebp
1000f7c1:	8b ec                	mov    ebp,esp
1000f7c3:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1000f7c6:	85 c9                	test   ecx,ecx
1000f7c8:	74 47                	je     0x1000f811
1000f7ca:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1000f7cd:	3b 81 cc 00 00 00    	cmp    eax,DWORD PTR [ecx+0xcc]
1000f7d3:	7f 3c                	jg     0x1000f811
1000f7d5:	8b 91 d0 00 00 00    	mov    edx,DWORD PTR [ecx+0xd0]
1000f7db:	6b c0 4c             	imul   eax,eax,0x4c
1000f7de:	53                   	push   ebx
1000f7df:	8b 5d 14             	mov    ebx,DWORD PTR [ebp+0x14]
1000f7e2:	03 d0                	add    edx,eax
1000f7e4:	8b 44 0a 40          	mov    eax,DWORD PTR [edx+ecx*1+0x40]
1000f7e8:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1000f7eb:	3b d8                	cmp    ebx,eax
1000f7ed:	7d 21                	jge    0x1000f810
1000f7ef:	8b 4c 0a 44          	mov    ecx,DWORD PTR [edx+ecx*1+0x44]
1000f7f3:	57                   	push   edi
1000f7f4:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
1000f7f7:	8b 87 14 01 00 00    	mov    eax,DWORD PTR [edi+0x114]
1000f7fd:	99                   	cdq
1000f7fe:	f7 f9                	idiv   ecx
1000f800:	99                   	cdq
1000f801:	f7 7d 08             	idiv   DWORD PTR [ebp+0x8]
1000f804:	2b da                	sub    ebx,edx
1000f806:	0f af d9             	imul   ebx,ecx
1000f809:	01 9f 14 01 00 00    	add    DWORD PTR [edi+0x114],ebx
1000f80f:	5f                   	pop    edi
1000f810:	5b                   	pop    ebx
1000f811:	5d                   	pop    ebp
1000f812:	c3                   	ret
