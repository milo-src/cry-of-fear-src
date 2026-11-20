
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c1670 <.text+0xc0670>:
100c1670:	55                   	push   ebp
100c1671:	8b ec                	mov    ebp,esp
100c1673:	51                   	push   ecx
100c1674:	53                   	push   ebx
100c1675:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100c1678:	8b c1                	mov    eax,ecx
100c167a:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100c167d:	85 db                	test   ebx,ebx
100c167f:	74 69                	je     0x100c16ea
100c1681:	56                   	push   esi
100c1682:	57                   	push   edi
100c1683:	33 ff                	xor    edi,edi
100c1685:	8d b0 94 01 00 00    	lea    esi,[eax+0x194]
100c168b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100c1690:	8b ce                	mov    ecx,esi
100c1692:	e8 f9 60 f5 ff       	call   0x10017790
100c1697:	3b c3                	cmp    eax,ebx
100c1699:	74 4d                	je     0x100c16e8
100c169b:	8b ce                	mov    ecx,esi
100c169d:	e8 de 60 f5 ff       	call   0x10017780
100c16a2:	85 c0                	test   eax,eax
100c16a4:	74 12                	je     0x100c16b8
100c16a6:	47                   	inc    edi
100c16a7:	83 c6 08             	add    esi,0x8
100c16aa:	83 ff 04             	cmp    edi,0x4
100c16ad:	7c e1                	jl     0x100c1690
100c16af:	5f                   	pop    edi
100c16b0:	5e                   	pop    esi
100c16b1:	5b                   	pop    ebx
100c16b2:	8b e5                	mov    esp,ebp
100c16b4:	5d                   	pop    ebp
100c16b5:	c2 08 00             	ret    0x8
100c16b8:	8b 75 fc             	mov    esi,DWORD PTR [ebp-0x4]
100c16bb:	53                   	push   ebx
100c16bc:	8d 8e 94 01 00 00    	lea    ecx,[esi+0x194]
100c16c2:	8d 0c f9             	lea    ecx,[ecx+edi*8]
100c16c5:	e8 76 60 f5 ff       	call   0x10017740
100c16ca:	8d 04 7f             	lea    eax,[edi+edi*2]
100c16cd:	8d 0c 86             	lea    ecx,[esi+eax*4]
100c16d0:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100c16d3:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
100c16d7:	66 0f d6 81 b4 01 00 	movq   QWORD PTR [ecx+0x1b4],xmm0
100c16de:	00 
100c16df:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
100c16e2:	89 81 bc 01 00 00    	mov    DWORD PTR [ecx+0x1bc],eax
100c16e8:	5f                   	pop    edi
100c16e9:	5e                   	pop    esi
100c16ea:	5b                   	pop    ebx
100c16eb:	8b e5                	mov    esp,ebp
100c16ed:	5d                   	pop    ebp
100c16ee:	c2 08 00             	ret    0x8
