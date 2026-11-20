
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000dcb0 <.text+0xccb0>:
1000dcb0:	55                   	push   ebp
1000dcb1:	8b ec                	mov    ebp,esp
1000dcb3:	81 ec 84 00 00 00    	sub    esp,0x84
1000dcb9:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1000dcbe:	33 c5                	xor    eax,ebp
1000dcc0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1000dcc3:	56                   	push   esi
1000dcc4:	57                   	push   edi
1000dcc5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1000dcc8:	8b f1                	mov    esi,ecx
1000dcca:	ba 10 2b 1a 10       	mov    edx,0x101a2b10
1000dccf:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000dcd2:	8a 08                	mov    cl,BYTE PTR [eax]
1000dcd4:	3a 0a                	cmp    cl,BYTE PTR [edx]
1000dcd6:	75 1a                	jne    0x1000dcf2
1000dcd8:	84 c9                	test   cl,cl
1000dcda:	74 12                	je     0x1000dcee
1000dcdc:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1000dcdf:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
1000dce2:	75 0e                	jne    0x1000dcf2
1000dce4:	83 c0 02             	add    eax,0x2
1000dce7:	83 c2 02             	add    edx,0x2
1000dcea:	84 c9                	test   cl,cl
1000dcec:	75 e4                	jne    0x1000dcd2
1000dcee:	33 c0                	xor    eax,eax
1000dcf0:	eb 05                	jmp    0x1000dcf7
1000dcf2:	1b c0                	sbb    eax,eax
1000dcf4:	83 c8 01             	or     eax,0x1
1000dcf7:	85 c0                	test   eax,eax
1000dcf9:	75 2b                	jne    0x1000dd26
1000dcfb:	ff 77 08             	push   DWORD PTR [edi+0x8]
1000dcfe:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1000dd04:	83 c4 04             	add    esp,0x4
1000dd07:	89 86 60 01 00 00    	mov    DWORD PTR [esi+0x160],eax
1000dd0d:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1000dd14:	5f                   	pop    edi
1000dd15:	5e                   	pop    esi
1000dd16:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000dd19:	33 cd                	xor    ecx,ebp
1000dd1b:	e8 93 fe 12 00       	call   0x1013dbb3
1000dd20:	8b e5                	mov    esp,ebp
1000dd22:	5d                   	pop    ebp
1000dd23:	c2 04 00             	ret    0x4
1000dd26:	83 be dc 00 00 00 10 	cmp    DWORD PTR [esi+0xdc],0x10
1000dd2d:	7d 61                	jge    0x1000dd90
1000dd2f:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
1000dd35:	50                   	push   eax
1000dd36:	ff 77 04             	push   DWORD PTR [edi+0x4]
1000dd39:	e8 22 ca 10 00       	call   0x1011a760
1000dd3e:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
1000dd44:	50                   	push   eax
1000dd45:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1000dd4b:	8b 8e dc 00 00 00    	mov    ecx,DWORD PTR [esi+0xdc]
1000dd51:	89 84 8e e0 00 00 00 	mov    DWORD PTR [esi+ecx*4+0xe0],eax
1000dd58:	ff 77 08             	push   DWORD PTR [edi+0x8]
1000dd5b:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1000dd61:	8b 8e dc 00 00 00    	mov    ecx,DWORD PTR [esi+0xdc]
1000dd67:	83 c4 10             	add    esp,0x10
1000dd6a:	89 84 8e 20 01 00 00 	mov    DWORD PTR [esi+ecx*4+0x120],eax
1000dd71:	ff 86 dc 00 00 00    	inc    DWORD PTR [esi+0xdc]
1000dd77:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1000dd7e:	5f                   	pop    edi
1000dd7f:	5e                   	pop    esi
1000dd80:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000dd83:	33 cd                	xor    ecx,ebp
1000dd85:	e8 29 fe 12 00       	call   0x1013dbb3
1000dd8a:	8b e5                	mov    esp,ebp
1000dd8c:	5d                   	pop    ebp
1000dd8d:	c2 04 00             	ret    0x4
1000dd90:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000dd93:	6a 10                	push   0x10
1000dd95:	8b 88 d0 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d0]
1000dd9b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000dda0:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1000dda6:	51                   	push   ecx
1000dda7:	68 20 2b 1a 10       	push   0x101a2b20
1000ddac:	6a 04                	push   0x4
1000ddae:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000ddb4:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000ddb7:	83 c4 10             	add    esp,0x10
1000ddba:	33 cd                	xor    ecx,ebp
1000ddbc:	5f                   	pop    edi
1000ddbd:	5e                   	pop    esi
1000ddbe:	e8 f0 fd 12 00       	call   0x1013dbb3
1000ddc3:	8b e5                	mov    esp,ebp
1000ddc5:	5d                   	pop    ebp
1000ddc6:	c2 04 00             	ret    0x4
