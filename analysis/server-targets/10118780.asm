
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10118780 <.text+0x117780>:
10118780:	55                   	push   ebp
10118781:	8b ec                	mov    ebp,esp
10118783:	51                   	push   ecx
10118784:	53                   	push   ebx
10118785:	56                   	push   esi
10118786:	57                   	push   edi
10118787:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1011878a:	33 ff                	xor    edi,edi
1011878c:	83 cb ff             	or     ebx,0xffffffff
1011878f:	57                   	push   edi
10118790:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
10118793:	e8 f8 fd ff ff       	call   0x10118590
10118798:	8b f0                	mov    esi,eax
1011879a:	83 c4 08             	add    esp,0x8
1011879d:	85 f6                	test   esi,esi
1011879f:	74 55                	je     0x101187f6
101187a1:	8b 06                	mov    eax,DWORD PTR [esi]
101187a3:	8b ce                	mov    ecx,esi
101187a5:	ff 50 24             	call   DWORD PTR [eax+0x24]
101187a8:	85 c0                	test   eax,eax
101187aa:	74 38                	je     0x101187e4
101187ac:	8b 06                	mov    eax,DWORD PTR [esi]
101187ae:	8b ce                	mov    ecx,esi
101187b0:	ff 75 08             	push   DWORD PTR [ebp+0x8]
101187b3:	ff 90 1c 01 00 00    	call   DWORD PTR [eax+0x11c]
101187b9:	8b f8                	mov    edi,eax
101187bb:	85 ff                	test   edi,edi
101187bd:	74 22                	je     0x101187e1
101187bf:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
101187c2:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
101187c8:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
101187ce:	83 c4 04             	add    esp,0x4
101187d1:	83 fb ff             	cmp    ebx,0xffffffff
101187d4:	74 04                	je     0x101187da
101187d6:	3b c3                	cmp    eax,ebx
101187d8:	7d 07                	jge    0x101187e1
101187da:	8b d8                	mov    ebx,eax
101187dc:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
101187df:	eb 03                	jmp    0x101187e4
101187e1:	8b 7d fc             	mov    edi,DWORD PTR [ebp-0x4]
101187e4:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
101187e7:	56                   	push   esi
101187e8:	e8 a3 fd ff ff       	call   0x10118590
101187ed:	8b f0                	mov    esi,eax
101187ef:	83 c4 08             	add    esp,0x8
101187f2:	85 f6                	test   esi,esi
101187f4:	75 ab                	jne    0x101187a1
101187f6:	8b c7                	mov    eax,edi
101187f8:	5f                   	pop    edi
101187f9:	5e                   	pop    esi
101187fa:	5b                   	pop    ebx
101187fb:	8b e5                	mov    esp,ebp
101187fd:	5d                   	pop    ebp
101187fe:	c3                   	ret
