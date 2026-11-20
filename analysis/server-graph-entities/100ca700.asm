
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ca700 <.text+0xc9700>:
100ca700:	55                   	push   ebp
100ca701:	8b ec                	mov    ebp,esp
100ca703:	51                   	push   ecx
100ca704:	8b d1                	mov    edx,ecx
100ca706:	53                   	push   ebx
100ca707:	89 55 fc             	mov    DWORD PTR [ebp-0x4],edx
100ca70a:	8b 9a e4 00 00 00    	mov    ebx,DWORD PTR [edx+0xe4]
100ca710:	81 fb 80 00 00 00    	cmp    ebx,0x80
100ca716:	7d 55                	jge    0x100ca76d
100ca718:	56                   	push   esi
100ca719:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100ca71c:	57                   	push   edi
100ca71d:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
100ca720:	3b f7                	cmp    esi,edi
100ca722:	74 47                	je     0x100ca76b
100ca724:	33 c9                	xor    ecx,ecx
100ca726:	85 db                	test   ebx,ebx
100ca728:	7e 27                	jle    0x100ca751
100ca72a:	8d 82 e8 02 00 00    	lea    eax,[edx+0x2e8]
100ca730:	8b 90 00 fe ff ff    	mov    edx,DWORD PTR [eax-0x200]
100ca736:	3b d6                	cmp    edx,esi
100ca738:	75 04                	jne    0x100ca73e
100ca73a:	39 38                	cmp    DWORD PTR [eax],edi
100ca73c:	74 2d                	je     0x100ca76b
100ca73e:	3b d7                	cmp    edx,edi
100ca740:	75 04                	jne    0x100ca746
100ca742:	39 30                	cmp    DWORD PTR [eax],esi
100ca744:	74 25                	je     0x100ca76b
100ca746:	41                   	inc    ecx
100ca747:	83 c0 04             	add    eax,0x4
100ca74a:	3b cb                	cmp    ecx,ebx
100ca74c:	7c e2                	jl     0x100ca730
100ca74e:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
100ca751:	89 b4 9a e8 00 00 00 	mov    DWORD PTR [edx+ebx*4+0xe8],esi
100ca758:	8b 82 e4 00 00 00    	mov    eax,DWORD PTR [edx+0xe4]
100ca75e:	89 bc 82 e8 02 00 00 	mov    DWORD PTR [edx+eax*4+0x2e8],edi
100ca765:	ff 82 e4 00 00 00    	inc    DWORD PTR [edx+0xe4]
100ca76b:	5f                   	pop    edi
100ca76c:	5e                   	pop    esi
100ca76d:	5b                   	pop    ebx
100ca76e:	8b e5                	mov    esp,ebp
100ca770:	5d                   	pop    ebp
100ca771:	c2 08 00             	ret    0x8
