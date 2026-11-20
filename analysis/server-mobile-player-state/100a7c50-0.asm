
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100a7c50 <.text+0xa6c50>:
100a7c50:	55                   	push   ebp
100a7c51:	8b ec                	mov    ebp,esp
100a7c53:	83 ec 14             	sub    esp,0x14
100a7c56:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100a7c5b:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100a7c5e:	b9 01 00 00 00       	mov    ecx,0x1
100a7c63:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
100a7c66:	39 88 90 00 00 00    	cmp    DWORD PTR [eax+0x90],ecx
100a7c6c:	0f 8c 86 02 00 00    	jl     0x100a7ef8
100a7c72:	53                   	push   ebx
100a7c73:	56                   	push   esi
100a7c74:	57                   	push   edi
100a7c75:	51                   	push   ecx
100a7c76:	e8 05 1a 07 00       	call   0x10119680
100a7c7b:	8b d8                	mov    ebx,eax
100a7c7d:	83 c4 04             	add    esp,0x4
100a7c80:	85 db                	test   ebx,ebx
100a7c82:	0f 84 55 02 00 00    	je     0x100a7edd
100a7c88:	8d b3 14 25 00 00    	lea    esi,[ebx+0x2514]
100a7c8e:	b8 06 00 00 00       	mov    eax,0x6
100a7c93:	89 75 f4             	mov    DWORD PTR [ebp-0xc],esi
100a7c96:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100a7c99:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100a7ca0:	8b 36                	mov    esi,DWORD PTR [esi]
100a7ca2:	85 f6                	test   esi,esi
100a7ca4:	0f 84 1e 02 00 00    	je     0x100a7ec8
100a7caa:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100a7caf:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
100a7cb5:	89 55 ec             	mov    DWORD PTR [ebp-0x14],edx
100a7cb8:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
100a7cbf:	00 
100a7cc0:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
100a7cc3:	b9 50 de 1a 10       	mov    ecx,0x101ade50
100a7cc8:	8b 07                	mov    eax,DWORD PTR [edi]
100a7cca:	03 c2                	add    eax,edx
100a7ccc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100a7cd0:	8a 10                	mov    dl,BYTE PTR [eax]
100a7cd2:	3a 11                	cmp    dl,BYTE PTR [ecx]
100a7cd4:	75 1a                	jne    0x100a7cf0
100a7cd6:	84 d2                	test   dl,dl
100a7cd8:	74 12                	je     0x100a7cec
100a7cda:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100a7cdd:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100a7ce0:	75 0e                	jne    0x100a7cf0
100a7ce2:	83 c0 02             	add    eax,0x2
100a7ce5:	83 c1 02             	add    ecx,0x2
100a7ce8:	84 d2                	test   dl,dl
100a7cea:	75 e4                	jne    0x100a7cd0
100a7cec:	33 c0                	xor    eax,eax
100a7cee:	eb 05                	jmp    0x100a7cf5
100a7cf0:	1b c0                	sbb    eax,eax
100a7cf2:	83 c8 01             	or     eax,0x1
100a7cf5:	85 c0                	test   eax,eax
100a7cf7:	74 12                	je     0x100a7d0b
100a7cf9:	8b b6 64 01 00 00    	mov    esi,DWORD PTR [esi+0x164]
100a7cff:	8b 55 ec             	mov    edx,DWORD PTR [ebp-0x14]
100a7d02:	85 f6                	test   esi,esi
100a7d04:	75 ba                	jne    0x100a7cc0
100a7d06:	e9 ba 01 00 00       	jmp    0x100a7ec5
100a7d0b:	57                   	push   edi
100a7d0c:	e8 1f b1 fa ff       	call   0x10052e30
100a7d11:	8b f0                	mov    esi,eax
100a7d13:	83 c4 04             	add    esp,0x4
100a7d16:	85 f6                	test   esi,esi
100a7d18:	0f 84 3c 01 00 00    	je     0x100a7e5a
100a7d1e:	80 be f9 01 00 00 00 	cmp    BYTE PTR [esi+0x1f9],0x0
100a7d25:	0f 85 2f 01 00 00    	jne    0x100a7e5a
100a7d2b:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
100a7d2e:	8b 88 dc 00 00 00    	mov    ecx,DWORD PTR [eax+0xdc]
100a7d34:	89 8b cc 05 00 00    	mov    DWORD PTR [ebx+0x5cc],ecx
100a7d3a:	c6 83 c0 1e 00 00 01 	mov    BYTE PTR [ebx+0x1ec0],0x1
100a7d41:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100a7d44:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100a7d4b:	74 19                	je     0x100a7d66
100a7d4d:	c6 83 1c 1f 00 00 01 	mov    BYTE PTR [ebx+0x1f1c],0x1
100a7d54:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100a7d59:	8b 00                	mov    eax,DWORD PTR [eax]
100a7d5b:	89 83 20 1f 00 00    	mov    DWORD PTR [ebx+0x1f20],eax
100a7d61:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a7d64:	eb 0c                	jmp    0x100a7d72
100a7d66:	80 bb 1c 1f 00 00 00 	cmp    BYTE PTR [ebx+0x1f1c],0x0
100a7d6d:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a7d70:	74 22                	je     0x100a7d94
100a7d72:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100a7d78:	6a 00                	push   0x0
100a7d7a:	ff 35 78 65 22 10    	push   DWORD PTR ds:0x10226578
100a7d80:	6a 01                	push   0x1
100a7d82:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100a7d88:	6a 01                	push   0x1
100a7d8a:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a7d90:	6a 01                	push   0x1
100a7d92:	eb 20                	jmp    0x100a7db4
100a7d94:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100a7d9a:	6a 00                	push   0x0
100a7d9c:	ff 35 78 65 22 10    	push   DWORD PTR ds:0x10226578
100a7da2:	6a 01                	push   0x1
100a7da4:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100a7daa:	6a 01                	push   0x1
100a7dac:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a7db2:	6a 00                	push   0x0
100a7db4:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a7dba:	83 c4 18             	add    esp,0x18
100a7dbd:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100a7dc3:	8b 83 2c 25 00 00    	mov    eax,DWORD PTR [ebx+0x252c]
100a7dc9:	85 c0                	test   eax,eax
100a7dcb:	74 5d                	je     0x100a7e2a
100a7dcd:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100a7dd0:	ba 50 de 1a 10       	mov    edx,0x101ade50
100a7dd5:	8b 08                	mov    ecx,DWORD PTR [eax]
100a7dd7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100a7ddc:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100a7de2:	8a 01                	mov    al,BYTE PTR [ecx]
100a7de4:	3a 02                	cmp    al,BYTE PTR [edx]
100a7de6:	75 1a                	jne    0x100a7e02
100a7de8:	84 c0                	test   al,al
100a7dea:	74 12                	je     0x100a7dfe
100a7dec:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100a7def:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100a7df2:	75 0e                	jne    0x100a7e02
100a7df4:	83 c1 02             	add    ecx,0x2
100a7df7:	83 c2 02             	add    edx,0x2
100a7dfa:	84 c0                	test   al,al
100a7dfc:	75 e4                	jne    0x100a7de2
100a7dfe:	33 c0                	xor    eax,eax
100a7e00:	eb 05                	jmp    0x100a7e07
100a7e02:	1b c0                	sbb    eax,eax
100a7e04:	83 c8 01             	or     eax,0x1
100a7e07:	85 c0                	test   eax,eax
100a7e09:	75 1f                	jne    0x100a7e2a
100a7e0b:	83 bb 98 1e 00 00 00 	cmp    DWORD PTR [ebx+0x1e98],0x0
100a7e12:	8b ce                	mov    ecx,esi
100a7e14:	8b 06                	mov    eax,DWORD PTR [esi]
100a7e16:	6a 00                	push   0x0
100a7e18:	6a 01                	push   0x1
100a7e1a:	8b 80 98 01 00 00    	mov    eax,DWORD PTR [eax+0x198]
100a7e20:	74 04                	je     0x100a7e26
100a7e22:	6a 06                	push   0x6
100a7e24:	eb 02                	jmp    0x100a7e28
100a7e26:	6a 01                	push   0x1
100a7e28:	ff d0                	call   eax
100a7e2a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100a7e2f:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100a7e33:	0f 5a c0             	cvtps2pd xmm0,xmm0
100a7e36:	f2 0f 58 05 20 a8 1c 	addsd  xmm0,QWORD PTR ds:0x101ca820
100a7e3d:	10 
100a7e3e:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100a7e42:	f3 0f 11 86 d8 01 00 	movss  DWORD PTR [esi+0x1d8],xmm0
100a7e49:	00 
100a7e4a:	f3 0f 11 86 d0 01 00 	movss  DWORD PTR [esi+0x1d0],xmm0
100a7e51:	00 
100a7e52:	f3 0f 11 86 cc 01 00 	movss  DWORD PTR [esi+0x1cc],xmm0
100a7e59:	00 
100a7e5a:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
100a7e5d:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100a7e60:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
100a7e67:	75 5c                	jne    0x100a7ec5
100a7e69:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a7e6c:	6a 64                	push   0x64
100a7e6e:	6a 00                	push   0x0
100a7e70:	83 ec 08             	sub    esp,0x8
100a7e73:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100a7e7a:	3f 
100a7e7b:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100a7e82:	68 14 29 1b 10       	push   0x101b2914
100a7e87:	6a 01                	push   0x1
100a7e89:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100a7e8f:	e8 5c 4b 05 00       	call   0x100fc9f0
100a7e94:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100a7e97:	83 c4 1c             	add    esp,0x1c
100a7e9a:	6a 64                	push   0x64
100a7e9c:	6a 00                	push   0x0
100a7e9e:	83 ec 08             	sub    esp,0x8
100a7ea1:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100a7ea8:	3f 
100a7ea9:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100a7eb0:	68 3c 2a 1b 10       	push   0x101b2a3c
100a7eb5:	6a 00                	push   0x0
100a7eb7:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100a7ebd:	e8 2e 4b 05 00       	call   0x100fc9f0
100a7ec2:	83 c4 1c             	add    esp,0x1c
100a7ec5:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100a7ec8:	8b 75 f4             	mov    esi,DWORD PTR [ebp-0xc]
100a7ecb:	83 c6 04             	add    esi,0x4
100a7ece:	83 e8 01             	sub    eax,0x1
100a7ed1:	89 75 f4             	mov    DWORD PTR [ebp-0xc],esi
100a7ed4:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100a7ed7:	0f 85 c3 fd ff ff    	jne    0x100a7ca0
100a7edd:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
100a7ee0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100a7ee5:	41                   	inc    ecx
100a7ee6:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
100a7ee9:	3b 88 90 00 00 00    	cmp    ecx,DWORD PTR [eax+0x90]
100a7eef:	0f 8e 80 fd ff ff    	jle    0x100a7c75
100a7ef5:	5f                   	pop    edi
100a7ef6:	5e                   	pop    esi
100a7ef7:	5b                   	pop    ebx
100a7ef8:	8b e5                	mov    esp,ebp
100a7efa:	5d                   	pop    ebp
100a7efb:	c2 10 00             	ret    0x10
