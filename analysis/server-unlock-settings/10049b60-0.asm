
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10049b60 <.text+0x48b60>:
10049b60:	55                   	push   ebp
10049b61:	8b ec                	mov    ebp,esp
10049b63:	6a ff                	push   0xffffffff
10049b65:	68 1f d9 19 10       	push   0x1019d91f
10049b6a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10049b70:	50                   	push   eax
10049b71:	83 ec 28             	sub    esp,0x28
10049b74:	53                   	push   ebx
10049b75:	56                   	push   esi
10049b76:	57                   	push   edi
10049b77:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10049b7c:	33 c5                	xor    eax,ebp
10049b7e:	50                   	push   eax
10049b7f:	8d 45 f4             	lea    eax,[ebp-0xc]
10049b82:	64 a3 00 00 00 00    	mov    fs:0x0,eax
10049b88:	8b d9                	mov    ebx,ecx
10049b8a:	89 5d f0             	mov    DWORD PTR [ebp-0x10],ebx
10049b8d:	83 7d 14 00          	cmp    DWORD PTR [ebp+0x14],0x0
10049b91:	c7 45 e8 00 00 00 00 	mov    DWORD PTR [ebp-0x18],0x0
10049b98:	74 1b                	je     0x10049bb5
10049b9a:	c7 03 38 14 1b 10    	mov    DWORD PTR [ebx],0x101b1438
10049ba0:	c7 43 68 a8 da 1a 10 	mov    DWORD PTR [ebx+0x68],0x101adaa8
10049ba7:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
10049bae:	c7 45 e8 01 00 00 00 	mov    DWORD PTR [ebp-0x18],0x1
10049bb5:	6a 00                	push   0x0
10049bb7:	8d 73 04             	lea    esi,[ebx+0x4]
10049bba:	8b cb                	mov    ecx,ebx
10049bbc:	6a 00                	push   0x0
10049bbe:	56                   	push   esi
10049bbf:	89 75 14             	mov    DWORD PTR [ebp+0x14],esi
10049bc2:	e8 d9 01 00 00       	call   0x10049da0
10049bc7:	8b 03                	mov    eax,DWORD PTR [ebx]
10049bc9:	6a 08                	push   0x8
10049bcb:	c7 45 fc 01 00 00 00 	mov    DWORD PTR [ebp-0x4],0x1
10049bd2:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10049bd5:	c7 04 03 34 14 1b 10 	mov    DWORD PTR [ebx+eax*1],0x101b1434
10049bdc:	8b 03                	mov    eax,DWORD PTR [ebx]
10049bde:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10049be1:	89 75 e4             	mov    DWORD PTR [ebp-0x1c],esi
10049be4:	8d 41 98             	lea    eax,[ecx-0x68]
10049be7:	89 44 19 fc          	mov    DWORD PTR [ecx+ebx*1-0x4],eax
10049beb:	c7 06 c0 da 1a 10    	mov    DWORD PTR [esi],0x101adac0
10049bf1:	e8 f3 45 0f 00       	call   0x1013e1e9
10049bf6:	8b f8                	mov    edi,eax
10049bf8:	83 c4 04             	add    esp,0x4
10049bfb:	85 ff                	test   edi,edi
10049bfd:	74 13                	je     0x10049c12
10049bff:	6a 01                	push   0x1
10049c01:	c6 45 fc 02          	mov    BYTE PTR [ebp-0x4],0x2
10049c05:	e8 4e 8e 0d 00       	call   0x10122a58
10049c0a:	83 c4 04             	add    esp,0x4
10049c0d:	89 47 04             	mov    DWORD PTR [edi+0x4],eax
10049c10:	eb 02                	jmp    0x10049c14
10049c12:	33 ff                	xor    edi,edi
10049c14:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
10049c17:	8d 5e 04             	lea    ebx,[esi+0x4]
10049c1a:	89 5d ec             	mov    DWORD PTR [ebp-0x14],ebx
10049c1d:	8d 56 08             	lea    edx,[esi+0x8]
10049c20:	8b 5d 14             	mov    ebx,DWORD PTR [ebp+0x14]
10049c23:	8d 4e 18             	lea    ecx,[esi+0x18]
10049c26:	89 7e 34             	mov    DWORD PTR [esi+0x34],edi
10049c29:	83 c0 28             	add    eax,0x28
10049c2c:	89 55 e4             	mov    DWORD PTR [ebp-0x1c],edx
10049c2f:	8d 7e 14             	lea    edi,[esi+0x14]
10049c32:	8b 55 14             	mov    edx,DWORD PTR [ebp+0x14]
10049c35:	83 c6 24             	add    esi,0x24
10049c38:	c7 03 00 db 1a 10    	mov    DWORD PTR [ebx],0x101adb00
10049c3e:	c6 43 48 00          	mov    BYTE PTR [ebx+0x48],0x0
10049c42:	c6 43 3d 00          	mov    BYTE PTR [ebx+0x3d],0x0
10049c46:	8b 5d ec             	mov    ebx,DWORD PTR [ebp-0x14]
10049c49:	89 5a 0c             	mov    DWORD PTR [edx+0xc],ebx
10049c4c:	8b 5d 14             	mov    ebx,DWORD PTR [ebp+0x14]
10049c4f:	8b 55 e4             	mov    edx,DWORD PTR [ebp-0x1c]
10049c52:	89 53 10             	mov    DWORD PTR [ebx+0x10],edx
10049c55:	89 7b 1c             	mov    DWORD PTR [ebx+0x1c],edi
10049c58:	89 4b 20             	mov    DWORD PTR [ebx+0x20],ecx
10049c5b:	89 73 2c             	mov    DWORD PTR [ebx+0x2c],esi
10049c5e:	89 43 30             	mov    DWORD PTR [ebx+0x30],eax
10049c61:	8b 5d ec             	mov    ebx,DWORD PTR [ebp-0x14]
10049c64:	c7 02 00 00 00 00    	mov    DWORD PTR [edx],0x0
10049c6a:	c7 01 00 00 00 00    	mov    DWORD PTR [ecx],0x0
10049c70:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
10049c76:	c7 03 00 00 00 00    	mov    DWORD PTR [ebx],0x0
10049c7c:	8b 5d 14             	mov    ebx,DWORD PTR [ebp+0x14]
10049c7f:	c7 07 00 00 00 00    	mov    DWORD PTR [edi],0x0
10049c85:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
10049c8b:	c7 43 4c 00 00 00 00 	mov    DWORD PTR [ebx+0x4c],0x0
10049c92:	a1 1c 2e 22 10       	mov    eax,ds:0x10222e1c
10049c97:	89 43 40             	mov    DWORD PTR [ebx+0x40],eax
10049c9a:	a1 20 2e 22 10       	mov    eax,ds:0x10222e20
10049c9f:	89 43 44             	mov    DWORD PTR [ebx+0x44],eax
10049ca2:	c7 43 38 00 00 00 00 	mov    DWORD PTR [ebx+0x38],0x0
10049ca9:	ff 75 10             	push   DWORD PTR [ebp+0x10]
10049cac:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10049caf:	83 c8 02             	or     eax,0x2
10049cb2:	c6 45 fc 03          	mov    BYTE PTR [ebp-0x4],0x3
10049cb6:	50                   	push   eax
10049cb7:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10049cba:	e8 31 95 0d 00       	call   0x101231f0
10049cbf:	83 c4 0c             	add    esp,0xc
10049cc2:	85 c0                	test   eax,eax
10049cc4:	74 62                	je     0x10049d28
10049cc6:	6a 01                	push   0x1
10049cc8:	50                   	push   eax
10049cc9:	8b cb                	mov    ecx,ebx
10049ccb:	e8 b0 d4 fe ff       	call   0x10037180
10049cd0:	8b 43 34             	mov    eax,DWORD PTR [ebx+0x34]
10049cd3:	8b 70 04             	mov    esi,DWORD PTR [eax+0x4]
10049cd6:	8b ce                	mov    ecx,esi
10049cd8:	89 75 e4             	mov    DWORD PTR [ebp-0x1c],esi
10049cdb:	8b 06                	mov    eax,DWORD PTR [esi]
10049cdd:	ff 50 04             	call   DWORD PTR [eax+0x4]
10049ce0:	8d 45 e0             	lea    eax,[ebp-0x20]
10049ce3:	c6 45 fc 04          	mov    BYTE PTR [ebp-0x4],0x4
10049ce7:	50                   	push   eax
10049ce8:	e8 03 59 fe ff       	call   0x1002f5f0
10049ced:	83 c4 04             	add    esp,0x4
10049cf0:	8b cb                	mov    ecx,ebx
10049cf2:	50                   	push   eax
10049cf3:	e8 78 d5 fe ff       	call   0x10037270
10049cf8:	85 f6                	test   esi,esi
10049cfa:	74 13                	je     0x10049d0f
10049cfc:	8b 06                	mov    eax,DWORD PTR [esi]
10049cfe:	8b ce                	mov    ecx,esi
10049d00:	ff 50 08             	call   DWORD PTR [eax+0x8]
10049d03:	85 c0                	test   eax,eax
10049d05:	74 08                	je     0x10049d0f
10049d07:	8b 10                	mov    edx,DWORD PTR [eax]
10049d09:	8b c8                	mov    ecx,eax
10049d0b:	6a 01                	push   0x1
10049d0d:	ff 12                	call   DWORD PTR [edx]
10049d0f:	8b 55 f0             	mov    edx,DWORD PTR [ebp-0x10]
10049d12:	8b c2                	mov    eax,edx
10049d14:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
10049d17:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10049d1e:	59                   	pop    ecx
10049d1f:	5f                   	pop    edi
10049d20:	5e                   	pop    esi
10049d21:	5b                   	pop    ebx
10049d22:	8b e5                	mov    esp,ebp
10049d24:	5d                   	pop    ebp
10049d25:	c2 10 00             	ret    0x10
10049d28:	8b 55 f0             	mov    edx,DWORD PTR [ebp-0x10]
10049d2b:	33 f6                	xor    esi,esi
10049d2d:	8b 02                	mov    eax,DWORD PTR [edx]
10049d2f:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10049d32:	b8 04 00 00 00       	mov    eax,0x4
10049d37:	03 ca                	add    ecx,edx
10049d39:	39 71 38             	cmp    DWORD PTR [ecx+0x38],esi
10049d3c:	0f 45 c6             	cmovne eax,esi
10049d3f:	0b 41 0c             	or     eax,DWORD PTR [ecx+0xc]
10049d42:	83 e0 15             	and    eax,0x15
10049d45:	83 c8 02             	or     eax,0x2
10049d48:	89 41 0c             	mov    DWORD PTR [ecx+0xc],eax
10049d4b:	8b 49 10             	mov    ecx,DWORD PTR [ecx+0x10]
10049d4e:	23 c8                	and    ecx,eax
10049d50:	74 c0                	je     0x10049d12
10049d52:	f6 c1 04             	test   cl,0x4
10049d55:	74 07                	je     0x10049d5e
10049d57:	be 5c da 1a 10       	mov    esi,0x101ada5c
10049d5c:	eb 10                	jmp    0x10049d6e
10049d5e:	f6 c1 02             	test   cl,0x2
10049d61:	be 74 da 1a 10       	mov    esi,0x101ada74
10049d66:	b8 8c da 1a 10       	mov    eax,0x101ada8c
10049d6b:	0f 44 f0             	cmove  esi,eax
10049d6e:	8d 45 e0             	lea    eax,[ebp-0x20]
10049d71:	6a 01                	push   0x1
10049d73:	50                   	push   eax
10049d74:	e8 d7 df fe ff       	call   0x10037d50
10049d79:	83 c4 08             	add    esp,0x8
10049d7c:	8d 4d cc             	lea    ecx,[ebp-0x34]
10049d7f:	50                   	push   eax
10049d80:	56                   	push   esi
10049d81:	e8 7a 63 fe ff       	call   0x10030100
10049d86:	68 cc 48 20 10       	push   0x102048cc
10049d8b:	8d 45 cc             	lea    eax,[ebp-0x34]
10049d8e:	50                   	push   eax
10049d8f:	e8 28 63 0f 00       	call   0x101400bc
