
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10118980 <.text+0x117980>:
10118980:	55                   	push   ebp
10118981:	8b ec                	mov    ebp,esp
10118983:	83 ec 5c             	sub    esp,0x5c
10118986:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1011898b:	33 c5                	xor    eax,ebp
1011898d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10118990:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10118993:	53                   	push   ebx
10118994:	56                   	push   esi
10118995:	57                   	push   edi
10118996:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
10118999:	89 45 a4             	mov    DWORD PTR [ebp-0x5c],eax
1011899c:	85 ff                	test   edi,edi
1011899e:	0f 84 13 01 00 00    	je     0x10118ab7
101189a4:	8a 0f                	mov    cl,BYTE PTR [edi]
101189a6:	84 c9                	test   cl,cl
101189a8:	0f 84 09 01 00 00    	je     0x10118ab7
101189ae:	33 f6                	xor    esi,esi
101189b0:	8b df                	mov    ebx,edi
101189b2:	8a c1                	mov    al,cl
101189b4:	3c 2e                	cmp    al,0x2e
101189b6:	0f 84 be 00 00 00    	je     0x10118a7a
101189bc:	46                   	inc    esi
101189bd:	8a 04 37             	mov    al,BYTE PTR [edi+esi*1]
101189c0:	8d 1c 37             	lea    ebx,[edi+esi*1]
101189c3:	84 c0                	test   al,al
101189c5:	75 ed                	jne    0x101189b4
101189c7:	80 f9 2a             	cmp    cl,0x2a
101189ca:	0f 85 e7 00 00 00    	jne    0x10118ab7
101189d0:	b9 b0 57 1e 10       	mov    ecx,0x101e57b0
101189d5:	8b c7                	mov    eax,edi
101189d7:	8a 10                	mov    dl,BYTE PTR [eax]
101189d9:	3a 11                	cmp    dl,BYTE PTR [ecx]
101189db:	75 1a                	jne    0x101189f7
101189dd:	84 d2                	test   dl,dl
101189df:	74 12                	je     0x101189f3
101189e1:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
101189e4:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
101189e7:	75 0e                	jne    0x101189f7
101189e9:	83 c0 02             	add    eax,0x2
101189ec:	83 c1 02             	add    ecx,0x2
101189ef:	84 d2                	test   dl,dl
101189f1:	75 e4                	jne    0x101189d7
101189f3:	33 c0                	xor    eax,eax
101189f5:	eb 05                	jmp    0x101189fc
101189f7:	1b c0                	sbb    eax,eax
101189f9:	83 c8 01             	or     eax,0x1
101189fc:	85 c0                	test   eax,eax
101189fe:	75 59                	jne    0x10118a59
10118a00:	68 30 21 1a 10       	push   0x101a2130
10118a05:	50                   	push   eax
10118a06:	e8 55 fa ff ff       	call   0x10118460
10118a0b:	8b f8                	mov    edi,eax
10118a0d:	83 c4 08             	add    esp,0x8
10118a10:	85 ff                	test   edi,edi
10118a12:	0f 84 9f 00 00 00    	je     0x10118ab7
10118a18:	8b 5d a4             	mov    ebx,DWORD PTR [ebp-0x5c]
10118a1b:	85 db                	test   ebx,ebx
10118a1d:	74 27                	je     0x10118a46
10118a1f:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10118a22:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
10118a28:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
10118a2e:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
10118a31:	8b f0                	mov    esi,eax
10118a33:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
10118a39:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
10118a3f:	83 c4 08             	add    esp,0x8
10118a42:	3b f0                	cmp    esi,eax
10118a44:	7e 71                	jle    0x10118ab7
10118a46:	8b c7                	mov    eax,edi
10118a48:	5f                   	pop    edi
10118a49:	5e                   	pop    esi
10118a4a:	5b                   	pop    ebx
10118a4b:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10118a4e:	33 cd                	xor    ecx,ebp
10118a50:	e8 5e 51 02 00       	call   0x1013dbb3
10118a55:	8b e5                	mov    esp,ebp
10118a57:	5d                   	pop    ebp
10118a58:	c3                   	ret
10118a59:	8b 5d a4             	mov    ebx,DWORD PTR [ebp-0x5c]
10118a5c:	8d 47 01             	lea    eax,[edi+0x1]
10118a5f:	50                   	push   eax
10118a60:	53                   	push   ebx
10118a61:	e8 1a fd ff ff       	call   0x10118780
10118a66:	83 c4 08             	add    esp,0x8
10118a69:	5f                   	pop    edi
10118a6a:	5e                   	pop    esi
10118a6b:	5b                   	pop    ebx
10118a6c:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10118a6f:	33 cd                	xor    ecx,ebp
10118a71:	e8 3d 51 02 00       	call   0x1013dbb3
10118a76:	8b e5                	mov    esp,ebp
10118a78:	5d                   	pop    ebp
10118a79:	c3                   	ret
10118a7a:	56                   	push   esi
10118a7b:	8d 45 a8             	lea    eax,[ebp-0x58]
10118a7e:	57                   	push   edi
10118a7f:	50                   	push   eax
10118a80:	e8 7b 6c 05 00       	call   0x1016f700
10118a85:	83 c4 0c             	add    esp,0xc
10118a88:	83 fe 51             	cmp    esi,0x51
10118a8b:	73 3d                	jae    0x10118aca
10118a8d:	8d 43 01             	lea    eax,[ebx+0x1]
10118a90:	c6 44 35 a8 00       	mov    BYTE PTR [ebp+esi*1-0x58],0x0
10118a95:	8b 5d a4             	mov    ebx,DWORD PTR [ebp-0x5c]
10118a98:	50                   	push   eax
10118a99:	8d 45 a8             	lea    eax,[ebp-0x58]
10118a9c:	50                   	push   eax
10118a9d:	53                   	push   ebx
10118a9e:	e8 5d fd ff ff       	call   0x10118800
10118aa3:	83 c4 0c             	add    esp,0xc
10118aa6:	5f                   	pop    edi
10118aa7:	5e                   	pop    esi
10118aa8:	5b                   	pop    ebx
10118aa9:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10118aac:	33 cd                	xor    ecx,ebp
10118aae:	e8 00 51 02 00       	call   0x1013dbb3
10118ab3:	8b e5                	mov    esp,ebp
10118ab5:	5d                   	pop    ebp
10118ab6:	c3                   	ret
10118ab7:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10118aba:	33 c0                	xor    eax,eax
10118abc:	5f                   	pop    edi
10118abd:	5e                   	pop    esi
10118abe:	33 cd                	xor    ecx,ebp
10118ac0:	5b                   	pop    ebx
10118ac1:	e8 ed 50 02 00       	call   0x1013dbb3
10118ac6:	8b e5                	mov    esp,ebp
10118ac8:	5d                   	pop    ebp
10118ac9:	c3                   	ret
10118aca:	e8 79 52 02 00       	call   0x1013dd48
