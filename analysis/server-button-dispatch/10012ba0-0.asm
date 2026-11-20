
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10012ba0 <.text+0x11ba0>:
10012ba0:	57                   	push   edi
10012ba1:	8b f9                	mov    edi,ecx
10012ba3:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10012ba6:	8b c8                	mov    ecx,eax
10012ba8:	c7 87 00 01 00 00 01 	mov    DWORD PTR [edi+0x100],0x1
10012baf:	00 00 00 
10012bb2:	f6 80 a4 01 00 00 20 	test   BYTE PTR [eax+0x1a4],0x20
10012bb9:	74 22                	je     0x10012bdd
10012bbb:	51                   	push   ecx
10012bbc:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10012bc3:	8d 8f e4 00 00 00    	lea    ecx,[edi+0xe4]
10012bc9:	6a 03                	push   0x3
10012bcb:	e8 c0 4b 00 00       	call   0x10017790
10012bd0:	50                   	push   eax
10012bd1:	8b cf                	mov    ecx,edi
10012bd3:	e8 58 fd 0e 00       	call   0x10102930
10012bd8:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10012bdb:	8b c8                	mov    ecx,eax
10012bdd:	83 b8 cc 01 00 00 00 	cmp    DWORD PTR [eax+0x1cc],0x0
10012be4:	0f 84 ca 00 00 00    	je     0x10012cb4
10012bea:	53                   	push   ebx
10012beb:	56                   	push   esi
10012bec:	33 db                	xor    ebx,ebx
10012bee:	8d 87 e4 00 00 00    	lea    eax,[edi+0xe4]
10012bf4:	8b c8                	mov    ecx,eax
10012bf6:	e8 95 4b 00 00       	call   0x10017790
10012bfb:	50                   	push   eax
10012bfc:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10012bff:	8b 88 cc 01 00 00    	mov    ecx,DWORD PTR [eax+0x1cc]
10012c05:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10012c0a:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10012c10:	51                   	push   ecx
10012c11:	53                   	push   ebx
10012c12:	e8 e9 58 10 00       	call   0x10118500
10012c17:	8b d8                	mov    ebx,eax
10012c19:	83 c4 0c             	add    esp,0xc
10012c1c:	85 db                	test   ebx,ebx
10012c1e:	0f 84 89 00 00 00    	je     0x10012cad
10012c24:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
10012c27:	8b 89 0c 02 00 00    	mov    ecx,DWORD PTR [ecx+0x20c]
10012c2d:	85 c9                	test   ecx,ecx
10012c2f:	74 7c                	je     0x10012cad
10012c31:	51                   	push   ecx
10012c32:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
10012c38:	83 c4 04             	add    esp,0x4
10012c3b:	85 c0                	test   eax,eax
10012c3d:	74 6e                	je     0x10012cad
10012c3f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10012c44:	ba 38 59 1a 10       	mov    edx,0x101a5938
10012c49:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
10012c4c:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10012c52:	03 01                	add    eax,DWORD PTR [ecx]
10012c54:	8a 08                	mov    cl,BYTE PTR [eax]
10012c56:	3a 0a                	cmp    cl,BYTE PTR [edx]
10012c58:	75 1a                	jne    0x10012c74
10012c5a:	84 c9                	test   cl,cl
10012c5c:	74 12                	je     0x10012c70
10012c5e:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
10012c61:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
10012c64:	75 0e                	jne    0x10012c74
10012c66:	83 c0 02             	add    eax,0x2
10012c69:	83 c2 02             	add    edx,0x2
10012c6c:	84 c9                	test   cl,cl
10012c6e:	75 e4                	jne    0x10012c54
10012c70:	33 c0                	xor    eax,eax
10012c72:	eb 05                	jmp    0x10012c79
10012c74:	1b c0                	sbb    eax,eax
10012c76:	83 c8 01             	or     eax,0x1
10012c79:	85 c0                	test   eax,eax
10012c7b:	8d 87 e4 00 00 00    	lea    eax,[edi+0xe4]
10012c81:	0f 85 6d ff ff ff    	jne    0x10012bf4
10012c87:	8b 33                	mov    esi,DWORD PTR [ebx]
10012c89:	51                   	push   ecx
10012c8a:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10012c91:	8d 8f e4 00 00 00    	lea    ecx,[edi+0xe4]
10012c97:	6a 03                	push   0x3
10012c99:	57                   	push   edi
10012c9a:	e8 f1 4a 00 00       	call   0x10017790
10012c9f:	50                   	push   eax
10012ca0:	8b cb                	mov    ecx,ebx
10012ca2:	ff 96 e8 00 00 00    	call   DWORD PTR [esi+0xe8]
10012ca8:	e9 41 ff ff ff       	jmp    0x10012bee
10012cad:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10012cb0:	8b c8                	mov    ecx,eax
10012cb2:	5e                   	pop    esi
10012cb3:	5b                   	pop    ebx
10012cb4:	8b 80 a4 01 00 00    	mov    eax,DWORD PTR [eax+0x1a4]
10012cba:	25 00 01 00 00       	and    eax,0x100
10012cbf:	f7 d8                	neg    eax
10012cc1:	1b c0                	sbb    eax,eax
10012cc3:	25 70 2f 01 10       	and    eax,0x10012f70
10012cc8:	89 47 7c             	mov    DWORD PTR [edi+0x7c],eax
10012ccb:	f6 81 a4 01 00 00 40 	test   BYTE PTR [ecx+0x1a4],0x40
10012cd2:	74 18                	je     0x10012cec
10012cd4:	8b 07                	mov    eax,DWORD PTR [edi]
10012cd6:	51                   	push   ecx
10012cd7:	8b cf                	mov    ecx,edi
10012cd9:	c7 47 78 00 2f 01 10 	mov    DWORD PTR [edi+0x78],0x10012f00
10012ce0:	c7 04 24 00 00 00 3f 	mov    DWORD PTR [esp],0x3f000000
10012ce7:	ff 50 08             	call   DWORD PTR [eax+0x8]
10012cea:	5f                   	pop    edi
10012ceb:	c3                   	ret
10012cec:	8b cf                	mov    ecx,edi
10012cee:	5f                   	pop    edi
10012cef:	e9 dc 4d 00 00       	jmp    0x10017ad0
