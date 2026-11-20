
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1016f680 <.text+0x16e680>:
1016f680:	53                   	push   ebx
1016f681:	56                   	push   esi
1016f682:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1016f686:	8b 54 24 10          	mov    edx,DWORD PTR [esp+0x10]
1016f68a:	8b 5c 24 14          	mov    ebx,DWORD PTR [esp+0x14]
1016f68e:	f7 c3 ff ff ff ff    	test   ebx,0xffffffff
1016f694:	74 50                	je     0x1016f6e6
1016f696:	2b ca                	sub    ecx,edx
1016f698:	f7 c2 03 00 00 00    	test   edx,0x3
1016f69e:	74 17                	je     0x1016f6b7
1016f6a0:	0f b6 04 11          	movzx  eax,BYTE PTR [ecx+edx*1]
1016f6a4:	3a 02                	cmp    al,BYTE PTR [edx]
1016f6a6:	75 48                	jne    0x1016f6f0
1016f6a8:	85 c0                	test   eax,eax
1016f6aa:	74 3a                	je     0x1016f6e6
1016f6ac:	42                   	inc    edx
1016f6ad:	83 eb 01             	sub    ebx,0x1
1016f6b0:	76 34                	jbe    0x1016f6e6
1016f6b2:	f6 c2 03             	test   dl,0x3
1016f6b5:	75 e9                	jne    0x1016f6a0
1016f6b7:	8d 04 11             	lea    eax,[ecx+edx*1]
1016f6ba:	25 ff 0f 00 00       	and    eax,0xfff
1016f6bf:	3d fc 0f 00 00       	cmp    eax,0xffc
1016f6c4:	77 da                	ja     0x1016f6a0
1016f6c6:	8b 04 11             	mov    eax,DWORD PTR [ecx+edx*1]
1016f6c9:	3b 02                	cmp    eax,DWORD PTR [edx]
1016f6cb:	75 d3                	jne    0x1016f6a0
1016f6cd:	83 eb 04             	sub    ebx,0x4
1016f6d0:	76 14                	jbe    0x1016f6e6
1016f6d2:	8d b0 ff fe fe fe    	lea    esi,[eax-0x1010101]
1016f6d8:	83 c2 04             	add    edx,0x4
1016f6db:	f7 d0                	not    eax
1016f6dd:	23 c6                	and    eax,esi
1016f6df:	a9 80 80 80 80       	test   eax,0x80808080
1016f6e4:	74 d1                	je     0x1016f6b7
1016f6e6:	33 c0                	xor    eax,eax
1016f6e8:	5e                   	pop    esi
1016f6e9:	5b                   	pop    ebx
1016f6ea:	c3                   	ret
1016f6eb:	eb 03                	jmp    0x1016f6f0
1016f6ed:	cc                   	int3
1016f6ee:	cc                   	int3
1016f6ef:	cc                   	int3
1016f6f0:	1b c0                	sbb    eax,eax
1016f6f2:	83 c8 01             	or     eax,0x1
1016f6f5:	5e                   	pop    esi
1016f6f6:	5b                   	pop    ebx
1016f6f7:	c3                   	ret
