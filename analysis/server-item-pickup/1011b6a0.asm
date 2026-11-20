
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011b6a0 <.text+0x11a6a0>:
1011b6a0:	55                   	push   ebp
1011b6a1:	8b ec                	mov    ebp,esp
1011b6a3:	53                   	push   ebx
1011b6a4:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1011b6a7:	56                   	push   esi
1011b6a8:	8b f1                	mov    esi,ecx
1011b6aa:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
1011b6ad:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011b6b0:	f3 0f 10 80 c0 01 00 	movss  xmm0,DWORD PTR [eax+0x1c0]
1011b6b7:	00 
1011b6b8:	0f 2e 05 34 97 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a9734
1011b6bf:	9f                   	lahf
1011b6c0:	f6 c4 44             	test   ah,0x44
1011b6c3:	7a 2b                	jp     0x1011b6f0
1011b6c5:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
1011b6cb:	56                   	push   esi
1011b6cc:	e8 3f 6d fc ff       	call   0x100e2410
1011b6d1:	85 c0                	test   eax,eax
1011b6d3:	75 18                	jne    0x1011b6ed
1011b6d5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011b6d8:	5e                   	pop    esi
1011b6d9:	5b                   	pop    ebx
1011b6da:	c7 80 c0 01 00 00 00 	mov    DWORD PTR [eax+0x1c0],0x0
1011b6e1:	00 00 00 
1011b6e4:	b8 01 00 00 00       	mov    eax,0x1
1011b6e9:	5d                   	pop    ebp
1011b6ea:	c2 10 00             	ret    0x10
1011b6ed:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
1011b6f0:	57                   	push   edi
1011b6f1:	83 f9 01             	cmp    ecx,0x1
1011b6f4:	0f 8d 8e 00 00 00    	jge    0x1011b788
1011b6fa:	c7 86 e4 01 00 00 ff 	mov    DWORD PTR [esi+0x1e4],0xffffffff
1011b701:	ff ff ff 
1011b704:	6a 00                	push   0x0
1011b706:	ff 75 14             	push   DWORD PTR [ebp+0x14]
1011b709:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1011b70c:	53                   	push   ebx
1011b70d:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
1011b713:	8b 01                	mov    eax,DWORD PTR [ecx]
1011b715:	ff 90 94 00 00 00    	call   DWORD PTR [eax+0x94]
1011b71b:	8b f8                	mov    edi,eax
1011b71d:	85 ff                	test   edi,edi
1011b71f:	7e 59                	jle    0x1011b77a
1011b721:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
1011b727:	56                   	push   esi
1011b728:	89 be dc 01 00 00    	mov    DWORD PTR [esi+0x1dc],edi
1011b72e:	e8 dd 6c fc ff       	call   0x100e2410
1011b733:	85 c0                	test   eax,eax
1011b735:	74 43                	je     0x1011b77a
1011b737:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1011b73a:	f3 0f 10 81 b4 01 00 	movss  xmm0,DWORD PTR [ecx+0x1b4]
1011b741:	00 
1011b742:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
1011b749:	9f                   	lahf
1011b74a:	f6 c4 44             	test   ah,0x44
1011b74d:	7b 2b                	jnp    0x1011b77a
1011b74f:	6a 64                	push   0x64
1011b751:	6a 00                	push   0x0
1011b753:	83 ec 08             	sub    esp,0x8
1011b756:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1011b75d:	3f 
1011b75e:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1011b765:	68 3c b5 1a 10       	push   0x101ab53c
1011b76a:	6a 03                	push   0x3
1011b76c:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
1011b772:	e8 79 12 fe ff       	call   0x100fc9f0
1011b777:	83 c4 1c             	add    esp,0x1c
1011b77a:	33 c0                	xor    eax,eax
1011b77c:	85 ff                	test   edi,edi
1011b77e:	5f                   	pop    edi
1011b77f:	5e                   	pop    esi
1011b780:	0f 9f c0             	setg   al
1011b783:	5b                   	pop    ebx
1011b784:	5d                   	pop    ebp
1011b785:	c2 10 00             	ret    0x10
1011b788:	8b be e4 01 00 00    	mov    edi,DWORD PTR [esi+0x1e4]
1011b78e:	85 ff                	test   edi,edi
1011b790:	0f 85 6e ff ff ff    	jne    0x1011b704
1011b796:	57                   	push   edi
1011b797:	ff 75 14             	push   DWORD PTR [ebp+0x14]
1011b79a:	3b d9                	cmp    ebx,ecx
1011b79c:	8b d3                	mov    edx,ebx
1011b79e:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1011b7a1:	0f 4d d1             	cmovge edx,ecx
1011b7a4:	2b fa                	sub    edi,edx
1011b7a6:	89 96 e4 01 00 00    	mov    DWORD PTR [esi+0x1e4],edx
1011b7ac:	03 fb                	add    edi,ebx
1011b7ae:	57                   	push   edi
1011b7af:	e9 59 ff ff ff       	jmp    0x1011b70d
