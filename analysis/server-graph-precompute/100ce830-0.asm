
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ce830 <.text+0xcd830>:
100ce830:	55                   	push   ebp
100ce831:	8b ec                	mov    ebp,esp
100ce833:	51                   	push   ecx
100ce834:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100ce837:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
100ce83a:	53                   	push   ebx
100ce83b:	56                   	push   esi
100ce83c:	6b f0 0b             	imul   esi,eax,0xb
100ce83f:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
100ce842:	57                   	push   edi
100ce843:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
100ce846:	47                   	inc    edi
100ce847:	03 75 10             	add    esi,DWORD PTR [ebp+0x10]
100ce84a:	8d 14 72             	lea    edx,[edx+esi*2]
100ce84d:	8b f1                	mov    esi,ecx
100ce84f:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
100ce852:	8b 5c 91 28          	mov    ebx,DWORD PTR [ecx+edx*4+0x28]
100ce856:	03 5e 14             	add    ebx,DWORD PTR [esi+0x14]
100ce859:	85 ff                	test   edi,edi
100ce85b:	7e 5a                	jle    0x100ce8b7
100ce85d:	0f 1f 00             	nop    DWORD PTR [eax]
100ce860:	8a 0b                	mov    cl,BYTE PTR [ebx]
100ce862:	43                   	inc    ebx
100ce863:	84 c9                	test   cl,cl
100ce865:	79 1d                	jns    0x100ce884
100ce867:	f6 d9                	neg    cl
100ce869:	8b d7                	mov    edx,edi
100ce86b:	0f be f1             	movsx  esi,cl
100ce86e:	3b fe                	cmp    edi,esi
100ce870:	0f 4e 45 0c          	cmovle eax,DWORD PTR [ebp+0xc]
100ce874:	2b d6                	sub    edx,esi
100ce876:	33 c9                	xor    ecx,ecx
100ce878:	3b fe                	cmp    edi,esi
100ce87a:	8b 75 fc             	mov    esi,DWORD PTR [ebp-0x4]
100ce87d:	0f 4f ca             	cmovg  ecx,edx
100ce880:	8b f9                	mov    edi,ecx
100ce882:	eb 2f                	jmp    0x100ce8b3
100ce884:	0f be d1             	movsx  edx,cl
100ce887:	8d 4a 01             	lea    ecx,[edx+0x1]
100ce88a:	3b f9                	cmp    edi,ecx
100ce88c:	7f 1d                	jg     0x100ce8ab
100ce88e:	0f be 03             	movsx  eax,BYTE PTR [ebx]
100ce891:	03 45 08             	add    eax,DWORD PTR [ebp+0x8]
100ce894:	8b 4e 18             	mov    ecx,DWORD PTR [esi+0x18]
100ce897:	3b c1                	cmp    eax,ecx
100ce899:	7c 06                	jl     0x100ce8a1
100ce89b:	2b c1                	sub    eax,ecx
100ce89d:	33 ff                	xor    edi,edi
100ce89f:	eb 11                	jmp    0x100ce8b2
100ce8a1:	85 c0                	test   eax,eax
100ce8a3:	79 02                	jns    0x100ce8a7
100ce8a5:	03 c1                	add    eax,ecx
100ce8a7:	33 ff                	xor    edi,edi
100ce8a9:	eb 07                	jmp    0x100ce8b2
100ce8ab:	83 c9 ff             	or     ecx,0xffffffff
100ce8ae:	2b ca                	sub    ecx,edx
100ce8b0:	03 f9                	add    edi,ecx
100ce8b2:	43                   	inc    ebx
100ce8b3:	85 ff                	test   edi,edi
100ce8b5:	7f a9                	jg     0x100ce860
100ce8b7:	5f                   	pop    edi
100ce8b8:	5e                   	pop    esi
100ce8b9:	5b                   	pop    ebx
100ce8ba:	8b e5                	mov    esp,ebp
100ce8bc:	5d                   	pop    ebp
100ce8bd:	c2 10 00             	ret    0x10
