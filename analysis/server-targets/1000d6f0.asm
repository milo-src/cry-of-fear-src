
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000d6f0 <.text+0xc6f0>:
1000d6f0:	55                   	push   ebp
1000d6f1:	8b ec                	mov    ebp,esp
1000d6f3:	83 ec 08             	sub    esp,0x8
1000d6f6:	53                   	push   ebx
1000d6f7:	8b d9                	mov    ebx,ecx
1000d6f9:	83 c8 ff             	or     eax,0xffffffff
1000d6fc:	56                   	push   esi
1000d6fd:	33 c9                	xor    ecx,ecx
1000d6ff:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
1000d702:	33 f6                	xor    esi,esi
1000d704:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
1000d707:	57                   	push   edi
1000d708:	39 8b 68 01 00 00    	cmp    DWORD PTR [ebx+0x168],ecx
1000d70e:	0f 84 8b 00 00 00    	je     0x1000d79f
1000d714:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000d719:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1000d71d:	f3 0f 59 05 1c 1f 1a 	mulss  xmm0,DWORD PTR ds:0x101a1f1c
1000d724:	10 
1000d725:	f3 0f 2c c0          	cvttss2si eax,xmm0
1000d729:	50                   	push   eax
1000d72a:	e8 1d 02 16 00       	call   0x1016d94c
1000d72f:	83 c4 04             	add    esp,0x4
1000d732:	e8 f4 01 16 00       	call   0x1016d92b
1000d737:	83 bb 68 01 00 00 01 	cmp    DWORD PTR [ebx+0x168],0x1
1000d73e:	75 30                	jne    0x1000d770
1000d740:	e8 e6 01 16 00       	call   0x1016d92b
1000d745:	99                   	cdq
1000d746:	f7 bb 24 01 00 00    	idiv   DWORD PTR [ebx+0x124]
1000d74c:	8b 8b e0 00 00 00    	mov    ecx,DWORD PTR [ebx+0xe0]
1000d752:	42                   	inc    edx
1000d753:	85 c9                	test   ecx,ecx
1000d755:	7e 46                	jle    0x1000d79d
1000d757:	8d 83 28 01 00 00    	lea    eax,[ebx+0x128]
1000d75d:	0f 1f 00             	nop    DWORD PTR [eax]
1000d760:	2b 10                	sub    edx,DWORD PTR [eax]
1000d762:	85 d2                	test   edx,edx
1000d764:	7e 37                	jle    0x1000d79d
1000d766:	46                   	inc    esi
1000d767:	83 c0 04             	add    eax,0x4
1000d76a:	3b f1                	cmp    esi,ecx
1000d76c:	7c f2                	jl     0x1000d760
1000d76e:	eb 2d                	jmp    0x1000d79d
1000d770:	33 f6                	xor    esi,esi
1000d772:	39 b3 e0 00 00 00    	cmp    DWORD PTR [ebx+0xe0],esi
1000d778:	7e 23                	jle    0x1000d79d
1000d77a:	8d bb 28 01 00 00    	lea    edi,[ebx+0x128]
1000d780:	e8 a6 01 16 00       	call   0x1016d92b
1000d785:	99                   	cdq
1000d786:	b9 64 00 00 00       	mov    ecx,0x64
1000d78b:	f7 f9                	idiv   ecx
1000d78d:	39 17                	cmp    DWORD PTR [edi],edx
1000d78f:	7d 0c                	jge    0x1000d79d
1000d791:	46                   	inc    esi
1000d792:	83 c7 04             	add    edi,0x4
1000d795:	3b b3 e0 00 00 00    	cmp    esi,DWORD PTR [ebx+0xe0]
1000d79b:	7c e3                	jl     0x1000d780
1000d79d:	33 c9                	xor    ecx,ecx
1000d79f:	3b b3 e0 00 00 00    	cmp    esi,DWORD PTR [ebx+0xe0]
1000d7a5:	0f 8d ab 00 00 00    	jge    0x1000d856
1000d7ab:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
1000d7b0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000d7b5:	8b 8c b3 e4 00 00 00 	mov    ecx,DWORD PTR [ebx+esi*4+0xe4]
1000d7bc:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1000d7c2:	51                   	push   ecx
1000d7c3:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1000d7c6:	e8 c5 ad 10 00       	call   0x10118590
1000d7cb:	8b f8                	mov    edi,eax
1000d7cd:	83 c4 08             	add    esp,0x8
1000d7d0:	85 ff                	test   edi,edi
1000d7d2:	74 28                	je     0x1000d7fc
1000d7d4:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000d7d7:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1000d7dd:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
1000d7e3:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
1000d7e6:	83 c4 04             	add    esp,0x4
1000d7e9:	83 f9 ff             	cmp    ecx,0xffffffff
1000d7ec:	74 04                	je     0x1000d7f2
1000d7ee:	3b c1                	cmp    eax,ecx
1000d7f0:	7d 0a                	jge    0x1000d7fc
1000d7f2:	8b cf                	mov    ecx,edi
1000d7f4:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
1000d7f7:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
1000d7fa:	eb 03                	jmp    0x1000d7ff
1000d7fc:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000d7ff:	8b 83 68 01 00 00    	mov    eax,DWORD PTR [ebx+0x168]
1000d805:	83 f8 01             	cmp    eax,0x1
1000d808:	74 4c                	je     0x1000d856
1000d80a:	46                   	inc    esi
1000d80b:	83 f8 02             	cmp    eax,0x2
1000d80e:	75 2e                	jne    0x1000d83e
1000d810:	3b b3 e0 00 00 00    	cmp    esi,DWORD PTR [ebx+0xe0]
1000d816:	7d 32                	jge    0x1000d84a
1000d818:	8d bb 28 01 00 00    	lea    edi,[ebx+0x128]
1000d81e:	8d 3c b7             	lea    edi,[edi+esi*4]
1000d821:	e8 05 01 16 00       	call   0x1016d92b
1000d826:	99                   	cdq
1000d827:	b9 64 00 00 00       	mov    ecx,0x64
1000d82c:	f7 f9                	idiv   ecx
1000d82e:	39 17                	cmp    DWORD PTR [edi],edx
1000d830:	7f 0c                	jg     0x1000d83e
1000d832:	46                   	inc    esi
1000d833:	83 c7 04             	add    edi,0x4
1000d836:	3b b3 e0 00 00 00    	cmp    esi,DWORD PTR [ebx+0xe0]
1000d83c:	7c e3                	jl     0x1000d821
1000d83e:	3b b3 e0 00 00 00    	cmp    esi,DWORD PTR [ebx+0xe0]
1000d844:	0f 8c 66 ff ff ff    	jl     0x1000d7b0
1000d84a:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1000d84d:	5f                   	pop    edi
1000d84e:	5e                   	pop    esi
1000d84f:	5b                   	pop    ebx
1000d850:	8b e5                	mov    esp,ebp
1000d852:	5d                   	pop    ebp
1000d853:	c2 04 00             	ret    0x4
1000d856:	5f                   	pop    edi
1000d857:	5e                   	pop    esi
1000d858:	8b c1                	mov    eax,ecx
1000d85a:	5b                   	pop    ebx
1000d85b:	8b e5                	mov    esp,ebp
1000d85d:	5d                   	pop    ebp
1000d85e:	c2 04 00             	ret    0x4
