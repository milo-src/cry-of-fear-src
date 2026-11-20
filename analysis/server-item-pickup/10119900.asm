
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10119900 <.text+0x118900>:
10119900:	55                   	push   ebp
10119901:	8b ec                	mov    ebp,esp
10119903:	53                   	push   ebx
10119904:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10119907:	85 db                	test   ebx,ebx
10119909:	0f 84 af 01 00 00    	je     0x10119abe
1011990f:	80 7b 0a 00          	cmp    BYTE PTR [ebx+0xa],0x0
10119913:	0f 84 84 01 00 00    	je     0x10119a9d
10119919:	c6 43 0a 00          	mov    BYTE PTR [ebx+0xa],0x0
1011991d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10119922:	57                   	push   edi
10119923:	bf 01 00 00 00       	mov    edi,0x1
10119928:	39 b8 90 00 00 00    	cmp    DWORD PTR [eax+0x90],edi
1011992e:	0f 8c 68 01 00 00    	jl     0x10119a9c
10119934:	56                   	push   esi
10119935:	57                   	push   edi
10119936:	e8 45 fd ff ff       	call   0x10119680
1011993b:	8b f0                	mov    esi,eax
1011993d:	83 c4 04             	add    esp,0x4
10119940:	85 f6                	test   esi,esi
10119942:	0f 84 41 01 00 00    	je     0x10119a89
10119948:	8b 16                	mov    edx,DWORD PTR [esi]
1011994a:	8b ce                	mov    ecx,esi
1011994c:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
10119952:	85 c0                	test   eax,eax
10119954:	0f 84 2f 01 00 00    	je     0x10119a89
1011995a:	ff 76 04             	push   DWORD PTR [esi+0x4]
1011995d:	e8 7e 8c ef ff       	call   0x100125e0
10119962:	8b f0                	mov    esi,eax
10119964:	83 c4 04             	add    esp,0x4
10119967:	85 f6                	test   esi,esi
10119969:	0f 84 1a 01 00 00    	je     0x10119a89
1011996f:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
10119975:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10119978:	8b 96 08 06 00 00    	mov    edx,DWORD PTR [esi+0x608]
1011997e:	8b 89 98 00 00 00    	mov    ecx,DWORD PTR [ecx+0x98]
10119984:	03 d1                	add    edx,ecx
10119986:	8b 80 d0 01 00 00    	mov    eax,DWORD PTR [eax+0x1d0]
1011998c:	03 c1                	add    eax,ecx
1011998e:	66 90                	xchg   ax,ax
10119990:	8a 08                	mov    cl,BYTE PTR [eax]
10119992:	3a 0a                	cmp    cl,BYTE PTR [edx]
10119994:	75 1a                	jne    0x101199b0
10119996:	84 c9                	test   cl,cl
10119998:	74 12                	je     0x101199ac
1011999a:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1011999d:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
101199a0:	75 0e                	jne    0x101199b0
101199a2:	83 c0 02             	add    eax,0x2
101199a5:	83 c2 02             	add    edx,0x2
101199a8:	84 c9                	test   cl,cl
101199aa:	75 e4                	jne    0x10119990
101199ac:	33 c0                	xor    eax,eax
101199ae:	eb 05                	jmp    0x101199b5
101199b0:	1b c0                	sbb    eax,eax
101199b2:	83 c8 01             	or     eax,0x1
101199b5:	85 c0                	test   eax,eax
101199b7:	0f 85 cc 00 00 00    	jne    0x10119a89
101199bd:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
101199c0:	33 c9                	xor    ecx,ecx
101199c2:	f3 0f 2c 80 64 01 00 	cvttss2si eax,DWORD PTR [eax+0x164]
101199c9:	00 
101199ca:	89 8e 08 06 00 00    	mov    DWORD PTR [esi+0x608],ecx
101199d0:	85 c0                	test   eax,eax
101199d2:	0f 48 c1             	cmovs  eax,ecx
101199d5:	89 86 04 06 00 00    	mov    DWORD PTR [esi+0x604],eax
101199db:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
101199de:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
101199e4:	51                   	push   ecx
101199e5:	ff 35 20 66 22 10    	push   DWORD PTR ds:0x10226620
101199eb:	6a 01                	push   0x1
101199ed:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
101199f3:	6a 02                	push   0x2
101199f5:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
101199fb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10119a00:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10119a06:	03 86 f8 05 00 00    	add    eax,DWORD PTR [esi+0x5f8]
10119a0c:	50                   	push   eax
10119a0d:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
10119a13:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10119a18:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10119a1e:	03 86 fc 05 00 00    	add    eax,DWORD PTR [esi+0x5fc]
10119a24:	50                   	push   eax
10119a25:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
10119a2b:	ff b6 04 06 00 00    	push   DWORD PTR [esi+0x604]
10119a31:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
10119a37:	ff b6 00 06 00 00    	push   DWORD PTR [esi+0x600]
10119a3d:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
10119a43:	83 c4 24             	add    esp,0x24
10119a46:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
10119a4c:	c6 43 0a 00          	mov    BYTE PTR [ebx+0xa],0x0
10119a50:	c6 86 f4 05 00 00 00 	mov    BYTE PTR [esi+0x5f4],0x0
10119a57:	c7 86 f8 05 00 00 00 	mov    DWORD PTR [esi+0x5f8],0x0
10119a5e:	00 00 00 
10119a61:	c7 86 fc 05 00 00 00 	mov    DWORD PTR [esi+0x5fc],0x0
10119a68:	00 00 00 
10119a6b:	c7 86 00 06 00 00 00 	mov    DWORD PTR [esi+0x600],0x0
10119a72:	00 00 00 
10119a75:	c7 86 04 06 00 00 00 	mov    DWORD PTR [esi+0x604],0x0
10119a7c:	00 00 00 
10119a7f:	c7 86 08 06 00 00 00 	mov    DWORD PTR [esi+0x608],0x0
10119a86:	00 00 00 
10119a89:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10119a8e:	47                   	inc    edi
10119a8f:	3b b8 90 00 00 00    	cmp    edi,DWORD PTR [eax+0x90]
10119a95:	0f 8e 9a fe ff ff    	jle    0x10119935
10119a9b:	5e                   	pop    esi
10119a9c:	5f                   	pop    edi
10119a9d:	8b cb                	mov    ecx,ebx
10119a9f:	e8 ac 91 fe ff       	call   0x10102c50
10119aa4:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10119aa7:	81 88 a8 01 00 00 00 	or     DWORD PTR [eax+0x1a8],0x40000000
10119aae:	00 00 40 
10119ab1:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10119ab4:	c7 80 d0 01 00 00 00 	mov    DWORD PTR [eax+0x1d0],0x0
10119abb:	00 00 00 
10119abe:	5b                   	pop    ebx
10119abf:	5d                   	pop    ebp
10119ac0:	c3                   	ret
