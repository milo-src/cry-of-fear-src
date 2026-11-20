
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10105920 <.text+0x104920>:
10105920:	55                   	push   ebp
10105921:	8b ec                	mov    ebp,esp
10105923:	53                   	push   ebx
10105924:	57                   	push   edi
10105925:	8b f9                	mov    edi,ecx
10105927:	8b 8f 4c 03 00 00    	mov    ecx,DWORD PTR [edi+0x34c]
1010592d:	85 c9                	test   ecx,ecx
1010592f:	74 05                	je     0x10105936
10105931:	e8 7a 4b ff ff       	call   0x100fa4b0
10105936:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
1010593c:	e8 3f 1e f1 ff       	call   0x10017780
10105941:	85 c0                	test   eax,eax
10105943:	74 0a                	je     0x1010594f
10105945:	c7 87 28 02 00 00 03 	mov    DWORD PTR [edi+0x228],0x3
1010594c:	00 00 00 
1010594f:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10105952:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
10105958:	e8 e3 1d f1 ff       	call   0x10017740
1010595d:	83 7d 0c 00          	cmp    DWORD PTR [ebp+0xc],0x0
10105961:	74 58                	je     0x101059bb
10105963:	56                   	push   esi
10105964:	8b 37                	mov    esi,DWORD PTR [edi]
10105966:	83 ec 10             	sub    esp,0x10
10105969:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x40000000
10105970:	40 
10105971:	c7 44 24 08 00 00 80 	mov    DWORD PTR [esp+0x8],0x3f800000
10105978:	3f 
10105979:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x404ccccd
10105980:	40 
10105981:	c7 04 24 33 33 33 40 	mov    DWORD PTR [esp],0x40333333
10105988:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
1010598e:	83 c4 04             	add    esp,0x4
10105991:	8b cf                	mov    ecx,edi
10105993:	d9 1c 24             	fstp   DWORD PTR [esp]
10105996:	ff b7 84 03 00 00    	push   DWORD PTR [edi+0x384]
1010599c:	ff 96 a0 01 00 00    	call   DWORD PTR [esi+0x1a0]
101059a2:	8b 87 8c 01 00 00    	mov    eax,DWORD PTR [edi+0x18c]
101059a8:	89 87 e0 03 00 00    	mov    DWORD PTR [edi+0x3e0],eax
101059ae:	8b 87 90 01 00 00    	mov    eax,DWORD PTR [edi+0x190]
101059b4:	89 87 e4 03 00 00    	mov    DWORD PTR [edi+0x3e4],eax
101059ba:	5e                   	pop    esi
101059bb:	81 a7 80 01 00 00 ff 	and    DWORD PTR [edi+0x180],0xefffffff
101059c2:	ff ff ef 
101059c5:	8b cf                	mov    ecx,edi
101059c7:	e8 04 51 f0 ff       	call   0x1000aad0
101059cc:	5f                   	pop    edi
101059cd:	5b                   	pop    ebx
101059ce:	5d                   	pop    ebp
101059cf:	c2 08 00             	ret    0x8
