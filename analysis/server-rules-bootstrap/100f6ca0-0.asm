
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f6ca0 <.text+0xf5ca0>:
100f6ca0:	55                   	push   ebp
100f6ca1:	8b ec                	mov    ebp,esp
100f6ca3:	83 ec 28             	sub    esp,0x28
100f6ca6:	53                   	push   ebx
100f6ca7:	8b d9                	mov    ebx,ecx
100f6ca9:	56                   	push   esi
100f6caa:	57                   	push   edi
100f6cab:	89 5d f8             	mov    DWORD PTR [ebp-0x8],ebx
100f6cae:	83 bb cc 24 00 00 00 	cmp    DWORD PTR [ebx+0x24cc],0x0
100f6cb5:	0f 84 c1 0b 00 00    	je     0x100f787c
100f6cbb:	68 14 a4 1c 10       	push   0x101ca414
100f6cc0:	c7 83 cc 24 00 00 00 	mov    DWORD PTR [ebx+0x24cc],0x0
100f6cc7:	00 00 00 
100f6cca:	6a 00                	push   0x0
100f6ccc:	c7 05 e4 7f 21 10 00 	mov    DWORD PTR ds:0x10217fe4,0x0
100f6cd3:	00 00 00 
100f6cd6:	e8 85 17 02 00       	call   0x10118460
100f6cdb:	83 c4 08             	add    esp,0x8
100f6cde:	85 c0                	test   eax,eax
100f6ce0:	0f 84 f3 00 00 00    	je     0x100f6dd9
100f6ce6:	ff 70 04             	push   DWORD PTR [eax+0x4]
100f6ce9:	e8 12 97 f9 ff       	call   0x10090400
100f6cee:	83 c4 04             	add    esp,0x4
100f6cf1:	85 c0                	test   eax,eax
100f6cf3:	0f 84 e0 00 00 00    	je     0x100f6dd9
100f6cf9:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
100f6cfc:	83 b9 4c 02 00 00 00 	cmp    DWORD PTR [ecx+0x24c],0x0
100f6d03:	0f 8e d0 00 00 00    	jle    0x100f6dd9
100f6d09:	80 b8 dd 00 00 00 01 	cmp    BYTE PTR [eax+0xdd],0x1
100f6d10:	0f 85 c3 00 00 00    	jne    0x100f6dd9
100f6d16:	83 3d 14 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f14,0x0
100f6d1d:	74 15                	je     0x100f6d34
100f6d1f:	0f 28 05 00 db 1d 10 	movaps xmm0,XMMWORD PTR ds:0x101ddb00
100f6d26:	0f 11 83 f4 03 00 00 	movups XMMWORD PTR [ebx+0x3f4],xmm0
100f6d2d:	0f 11 83 04 04 00 00 	movups XMMWORD PTR [ebx+0x404],xmm0
100f6d34:	8b b0 f4 00 00 00    	mov    esi,DWORD PTR [eax+0xf4]
100f6d3a:	8b b8 f8 00 00 00    	mov    edi,DWORD PTR [eax+0xf8]
100f6d40:	8b 98 fc 00 00 00    	mov    ebx,DWORD PTR [eax+0xfc]
100f6d46:	8b 80 e8 00 00 00    	mov    eax,DWORD PTR [eax+0xe8]
100f6d4c:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100f6d4f:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
100f6d52:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100f6d55:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f6d5b:	6a 00                	push   0x0
100f6d5d:	ff 35 a4 66 22 10    	push   DWORD PTR ds:0x102266a4
100f6d63:	6a 01                	push   0x1
100f6d65:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f6d6b:	6a 01                	push   0x1
100f6d6d:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f6d73:	56                   	push   esi
100f6d74:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f6d7a:	57                   	push   edi
100f6d7b:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f6d81:	53                   	push   ebx
100f6d82:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f6d88:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
100f6d8b:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100f6d91:	83 c4 24             	add    esp,0x24
100f6d94:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f6d9a:	83 3d 20 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f20,0x0
100f6da1:	74 33                	je     0x100f6dd6
100f6da3:	6a 00                	push   0x0
100f6da5:	6a 00                	push   0x0
100f6da7:	ff 35 a8 66 22 10    	push   DWORD PTR ds:0x102266a8
100f6dad:	6a 02                	push   0x2
100f6daf:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f6db5:	6a 00                	push   0x0
100f6db7:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f6dbd:	6a 00                	push   0x0
100f6dbf:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f6dc5:	6a 03                	push   0x3
100f6dc7:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f6dcd:	83 c4 1c             	add    esp,0x1c
100f6dd0:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f6dd6:	8b 5d f8             	mov    ebx,DWORD PTR [ebp-0x8]
100f6dd9:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f6ddc:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f6de2:	6a 00                	push   0x0
100f6de4:	ff 35 b4 66 22 10    	push   DWORD PTR ds:0x102266b4
100f6dea:	6a 01                	push   0x1
100f6dec:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f6df2:	83 c4 10             	add    esp,0x10
100f6df5:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f6dfb:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100f6e01:	85 c9                	test   ecx,ecx
100f6e03:	0f 84 36 01 00 00    	je     0x100f6f3f
100f6e09:	8b 01                	mov    eax,DWORD PTR [ecx]
100f6e0b:	ff 50 20             	call   DWORD PTR [eax+0x20]
100f6e0e:	85 c0                	test   eax,eax
100f6e10:	0f 84 29 01 00 00    	je     0x100f6f3f
100f6e16:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f6e1b:	bf 01 00 00 00       	mov    edi,0x1
100f6e20:	39 b8 90 00 00 00    	cmp    DWORD PTR [eax+0x90],edi
100f6e26:	0f 8c 13 01 00 00    	jl     0x100f6f3f
100f6e2c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100f6e30:	57                   	push   edi
100f6e31:	e8 4a 28 02 00       	call   0x10119680
100f6e36:	8b f0                	mov    esi,eax
100f6e38:	83 c4 04             	add    esp,0x4
100f6e3b:	85 f6                	test   esi,esi
100f6e3d:	0f 84 ea 00 00 00    	je     0x100f6f2d
100f6e43:	8b ce                	mov    ecx,esi
100f6e45:	e8 e6 dd fe ff       	call   0x100e4c30
100f6e4a:	85 c0                	test   eax,eax
100f6e4c:	74 0f                	je     0x100f6e5d
100f6e4e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f6e51:	c7 80 6c 02 00 00 00 	mov    DWORD PTR [eax+0x26c],0x3f800000
100f6e58:	00 80 3f 
100f6e5b:	eb 24                	jmp    0x100f6e81
100f6e5d:	8b ce                	mov    ecx,esi
100f6e5f:	e8 fc de fe ff       	call   0x100e4d60
100f6e64:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100f6e67:	85 c0                	test   eax,eax
100f6e69:	74 0c                	je     0x100f6e77
100f6e6b:	c7 81 6c 02 00 00 00 	mov    DWORD PTR [ecx+0x26c],0x40000000
100f6e72:	00 00 40 
100f6e75:	eb 0a                	jmp    0x100f6e81
100f6e77:	c7 81 6c 02 00 00 00 	mov    DWORD PTR [ecx+0x26c],0x0
100f6e7e:	00 00 00 
100f6e81:	6a 00                	push   0x0
100f6e83:	6a 00                	push   0x0
100f6e85:	ff 35 c8 66 22 10    	push   DWORD PTR ds:0x102266c8
100f6e8b:	6a 02                	push   0x2
100f6e8d:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f6e93:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f6e96:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f6e9c:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100f6ea2:	50                   	push   eax
100f6ea3:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f6ea9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f6eac:	f3 0f 2c 80 6c 02 00 	cvttss2si eax,DWORD PTR [eax+0x26c]
100f6eb3:	00 
100f6eb4:	50                   	push   eax
100f6eb5:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f6ebb:	83 c4 1c             	add    esp,0x1c
100f6ebe:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f6ec4:	68 bc c2 1a 10       	push   0x101ac2bc
100f6ec9:	8b ce                	mov    ecx,esi
100f6ecb:	e8 b0 b4 fe ff       	call   0x100e2380
100f6ed0:	6a 00                	push   0x0
100f6ed2:	6a 00                	push   0x0
100f6ed4:	ff 35 dc 66 22 10    	push   DWORD PTR ds:0x102266dc
100f6eda:	6a 02                	push   0x2
100f6edc:	85 c0                	test   eax,eax
100f6ede:	74 20                	je     0x100f6f00
100f6ee0:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f6ee6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f6ee9:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f6eef:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100f6ef5:	50                   	push   eax
100f6ef6:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f6efc:	6a 01                	push   0x1
100f6efe:	eb 1e                	jmp    0x100f6f1e
100f6f00:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f6f06:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f6f09:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f6f0f:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100f6f15:	50                   	push   eax
100f6f16:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f6f1c:	6a 00                	push   0x0
100f6f1e:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f6f24:	83 c4 1c             	add    esp,0x1c
100f6f27:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f6f2d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f6f32:	47                   	inc    edi
100f6f33:	3b b8 90 00 00 00    	cmp    edi,DWORD PTR [eax+0x90]
100f6f39:	0f 8e f1 fe ff ff    	jle    0x100f6e30
100f6f3f:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f6f42:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f6f48:	6a 00                	push   0x0
100f6f4a:	ff 35 a8 64 22 10    	push   DWORD PTR ds:0x102264a8
100f6f50:	6a 01                	push   0x1
100f6f52:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f6f58:	6a 00                	push   0x0
100f6f5a:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f6f60:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f6f66:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f6f69:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f6f6f:	6a 00                	push   0x0
100f6f71:	ff 35 74 65 22 10    	push   DWORD PTR ds:0x10226574
100f6f77:	6a 01                	push   0x1
100f6f79:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f6f7f:	ff b3 bc 1e 00 00    	push   DWORD PTR [ebx+0x1ebc]
100f6f85:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f6f8b:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f6f91:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f6f94:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f6f9a:	6a 00                	push   0x0
100f6f9c:	ff 35 1c 66 22 10    	push   DWORD PTR ds:0x1022661c
100f6fa2:	6a 01                	push   0x1
100f6fa4:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f6faa:	ff b3 0c 06 00 00    	push   DWORD PTR [ebx+0x60c]
100f6fb0:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f6fb6:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f6fbc:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f6fbf:	be e0 bb 1d 10       	mov    esi,0x101dbbe0
100f6fc4:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f6fca:	ff 15 84 31 22 10    	call   DWORD PTR ds:0x10223184
100f6fd0:	83 c4 40             	add    esp,0x40
100f6fd3:	8a 08                	mov    cl,BYTE PTR [eax]
100f6fd5:	3a 0e                	cmp    cl,BYTE PTR [esi]
100f6fd7:	75 1a                	jne    0x100f6ff3
100f6fd9:	84 c9                	test   cl,cl
100f6fdb:	74 12                	je     0x100f6fef
100f6fdd:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100f6fe0:	3a 4e 01             	cmp    cl,BYTE PTR [esi+0x1]
100f6fe3:	75 0e                	jne    0x100f6ff3
100f6fe5:	83 c0 02             	add    eax,0x2
100f6fe8:	83 c6 02             	add    esi,0x2
100f6feb:	84 c9                	test   cl,cl
100f6fed:	75 e4                	jne    0x100f6fd3
100f6fef:	33 c0                	xor    eax,eax
100f6ff1:	eb 05                	jmp    0x100f6ff8
100f6ff3:	1b c0                	sbb    eax,eax
100f6ff5:	83 c8 01             	or     eax,0x1
100f6ff8:	85 c0                	test   eax,eax
100f6ffa:	0f 84 b6 00 00 00    	je     0x100f70b6
100f7000:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f7003:	be f4 bb 1d 10       	mov    esi,0x101dbbf4
100f7008:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f700e:	ff 15 84 31 22 10    	call   DWORD PTR ds:0x10223184
100f7014:	83 c4 04             	add    esp,0x4
100f7017:	8a 08                	mov    cl,BYTE PTR [eax]
100f7019:	3a 0e                	cmp    cl,BYTE PTR [esi]
100f701b:	75 1a                	jne    0x100f7037
100f701d:	84 c9                	test   cl,cl
100f701f:	74 12                	je     0x100f7033
100f7021:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100f7024:	3a 4e 01             	cmp    cl,BYTE PTR [esi+0x1]
100f7027:	75 0e                	jne    0x100f7037
100f7029:	83 c0 02             	add    eax,0x2
100f702c:	83 c6 02             	add    esi,0x2
100f702f:	84 c9                	test   cl,cl
100f7031:	75 e4                	jne    0x100f7017
100f7033:	33 c0                	xor    eax,eax
100f7035:	eb 05                	jmp    0x100f703c
100f7037:	1b c0                	sbb    eax,eax
100f7039:	83 c8 01             	or     eax,0x1
100f703c:	85 c0                	test   eax,eax
100f703e:	74 76                	je     0x100f70b6
100f7040:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f7043:	be 08 bc 1d 10       	mov    esi,0x101dbc08
100f7048:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f704e:	ff 15 84 31 22 10    	call   DWORD PTR ds:0x10223184
100f7054:	83 c4 04             	add    esp,0x4
100f7057:	8a 08                	mov    cl,BYTE PTR [eax]
100f7059:	3a 0e                	cmp    cl,BYTE PTR [esi]
100f705b:	75 1a                	jne    0x100f7077
100f705d:	84 c9                	test   cl,cl
100f705f:	74 12                	je     0x100f7073
100f7061:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100f7064:	3a 4e 01             	cmp    cl,BYTE PTR [esi+0x1]
100f7067:	75 0e                	jne    0x100f7077
100f7069:	83 c0 02             	add    eax,0x2
100f706c:	83 c6 02             	add    esi,0x2
100f706f:	84 c9                	test   cl,cl
100f7071:	75 e4                	jne    0x100f7057
100f7073:	33 c0                	xor    eax,eax
100f7075:	eb 05                	jmp    0x100f707c
100f7077:	1b c0                	sbb    eax,eax
100f7079:	83 c8 01             	or     eax,0x1
100f707c:	85 c0                	test   eax,eax
100f707e:	74 36                	je     0x100f70b6
100f7080:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f7083:	c7 83 b8 03 00 00 00 	mov    DWORD PTR [ebx+0x3b8],0x0
100f708a:	00 00 00 
100f708d:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f7093:	6a 00                	push   0x0
100f7095:	ff 35 50 66 22 10    	push   DWORD PTR ds:0x10226650
100f709b:	6a 01                	push   0x1
100f709d:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f70a3:	6a 00                	push   0x0
100f70a5:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f70ab:	83 c4 14             	add    esp,0x14
100f70ae:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f70b4:	eb 3d                	jmp    0x100f70f3
100f70b6:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f70b9:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f70bf:	6a 00                	push   0x0
100f70c1:	ff 35 50 66 22 10    	push   DWORD PTR ds:0x10226650
100f70c7:	6a 01                	push   0x1
100f70c9:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f70cf:	6a 01                	push   0x1
100f70d1:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f70d7:	83 c4 14             	add    esp,0x14
100f70da:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f70e0:	6a 00                	push   0x0
100f70e2:	8b cb                	mov    ecx,ebx
100f70e4:	c7 83 b8 03 00 00 01 	mov    DWORD PTR [ebx+0x3b8],0x1
100f70eb:	00 00 00 
100f70ee:	e8 fd 7e fe ff       	call   0x100deff0
100f70f3:	8d 8b 88 03 00 00    	lea    ecx,[ebx+0x388]
100f70f9:	e8 82 06 f2 ff       	call   0x10017780
100f70fe:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100f7101:	8b 89 0c 02 00 00    	mov    ecx,DWORD PTR [ecx+0x20c]
100f7107:	51                   	push   ecx
100f7108:	6a 00                	push   0x0
100f710a:	ff 35 4c 66 22 10    	push   DWORD PTR ds:0x1022664c
100f7110:	6a 01                	push   0x1
100f7112:	85 c0                	test   eax,eax
100f7114:	75 1b                	jne    0x100f7131
100f7116:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f711c:	6a ff                	push   0xffffffff
100f711e:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100f7124:	6a 00                	push   0x0
100f7126:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f712c:	83 c4 18             	add    esp,0x18
100f712f:	eb 35                	jmp    0x100f7166
100f7131:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f7137:	83 c4 10             	add    esp,0x10
100f713a:	8d 8b 88 03 00 00    	lea    ecx,[ebx+0x388]
100f7140:	e8 5b 06 f2 ff       	call   0x100177a0
100f7145:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100f7148:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f714e:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100f7154:	50                   	push   eax
100f7155:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100f715b:	6a 00                	push   0x0
100f715d:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7163:	83 c4 0c             	add    esp,0xc
100f7166:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f716c:	8d 8b 80 03 00 00    	lea    ecx,[ebx+0x380]
100f7172:	e8 09 06 f2 ff       	call   0x10017780
100f7177:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100f717a:	8b 89 0c 02 00 00    	mov    ecx,DWORD PTR [ecx+0x20c]
100f7180:	51                   	push   ecx
100f7181:	6a 00                	push   0x0
100f7183:	ff 35 40 66 22 10    	push   DWORD PTR ds:0x10226640
100f7189:	6a 01                	push   0x1
100f718b:	85 c0                	test   eax,eax
100f718d:	75 13                	jne    0x100f71a2
100f718f:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f7195:	6a ff                	push   0xffffffff
100f7197:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100f719d:	83 c4 14             	add    esp,0x14
100f71a0:	eb 2d                	jmp    0x100f71cf
100f71a2:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f71a8:	83 c4 10             	add    esp,0x10
100f71ab:	8d 8b 80 03 00 00    	lea    ecx,[ebx+0x380]
100f71b1:	e8 ea 05 f2 ff       	call   0x100177a0
100f71b6:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100f71b9:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f71bf:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100f71c5:	50                   	push   eax
100f71c6:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100f71cc:	83 c4 08             	add    esp,0x8
100f71cf:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f71d5:	bf 01 00 00 00       	mov    edi,0x1
100f71da:	8d b3 f8 07 00 00    	lea    esi,[ebx+0x7f8]
100f71e0:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f71e3:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f71e9:	6a 00                	push   0x0
100f71eb:	ff 35 48 66 22 10    	push   DWORD PTR ds:0x10226648
100f71f1:	6a 01                	push   0x1
100f71f3:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f71f9:	57                   	push   edi
100f71fa:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7200:	6a 00                	push   0x0
100f7202:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7208:	6a 00                	push   0x0
100f720a:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100f7210:	6a 00                	push   0x0
100f7212:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7218:	8d 46 f0             	lea    eax,[esi-0x10]
100f721b:	50                   	push   eax
100f721c:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f7222:	56                   	push   esi
100f7223:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f7229:	8d 46 10             	lea    eax,[esi+0x10]
100f722c:	50                   	push   eax
100f722d:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f7233:	8d 46 20             	lea    eax,[esi+0x20]
100f7236:	50                   	push   eax
100f7237:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f723d:	8d 46 b0             	lea    eax,[esi-0x50]
100f7240:	50                   	push   eax
100f7241:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f7247:	8d 46 c0             	lea    eax,[esi-0x40]
100f724a:	50                   	push   eax
100f724b:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f7251:	8d 46 d0             	lea    eax,[esi-0x30]
100f7254:	50                   	push   eax
100f7255:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f725b:	8d 46 e0             	lea    eax,[esi-0x20]
100f725e:	50                   	push   eax
100f725f:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f7265:	83 c4 40             	add    esp,0x40
100f7268:	8d 46 30             	lea    eax,[esi+0x30]
100f726b:	50                   	push   eax
100f726c:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f7272:	8d 46 60             	lea    eax,[esi+0x60]
100f7275:	50                   	push   eax
100f7276:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f727c:	8d 86 a0 00 00 00    	lea    eax,[esi+0xa0]
100f7282:	50                   	push   eax
100f7283:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f7289:	83 c4 0c             	add    esp,0xc
100f728c:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f7292:	47                   	inc    edi
100f7293:	81 c6 20 01 00 00    	add    esi,0x120
100f7299:	83 ff 10             	cmp    edi,0x10
100f729c:	0f 8e 3e ff ff ff    	jle    0x100f71e0
100f72a2:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100f72a8:	85 c9                	test   ecx,ecx
100f72aa:	0f 84 9c 01 00 00    	je     0x100f744c
100f72b0:	8b 01                	mov    eax,DWORD PTR [ecx]
100f72b2:	ff 50 20             	call   DWORD PTR [eax+0x20]
100f72b5:	85 c0                	test   eax,eax
100f72b7:	0f 84 8f 01 00 00    	je     0x100f744c
100f72bd:	8d b3 48 23 00 00    	lea    esi,[ebx+0x2348]
100f72c3:	c6 45 ff 00          	mov    BYTE PTR [ebp-0x1],0x0
100f72c7:	8b ce                	mov    ecx,esi
100f72c9:	e8 b2 04 f2 ff       	call   0x10017780
100f72ce:	85 c0                	test   eax,eax
100f72d0:	0f 84 02 01 00 00    	je     0x100f73d8
100f72d6:	8b ce                	mov    ecx,esi
100f72d8:	e8 c3 04 f2 ff       	call   0x100177a0
100f72dd:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100f72e0:	83 b8 48 02 00 00 00 	cmp    DWORD PTR [eax+0x248],0x0
100f72e7:	0f 84 eb 00 00 00    	je     0x100f73d8
100f72ed:	8b ce                	mov    ecx,esi
100f72ef:	c6 45 ff 01          	mov    BYTE PTR [ebp-0x1],0x1
100f72f3:	e8 a8 04 f2 ff       	call   0x100177a0
100f72f8:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100f72fb:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f7301:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f7304:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f730a:	e8 71 fe 01 00       	call   0x10117180
100f730f:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f7312:	83 c4 08             	add    esp,0x8
100f7315:	8b ce                	mov    ecx,esi
100f7317:	81 88 a8 01 00 00 80 	or     DWORD PTR [eax+0x1a8],0x80
100f731e:	00 00 00 
100f7321:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f7324:	c7 80 70 01 00 00 00 	mov    DWORD PTR [eax+0x170],0x0
100f732b:	00 00 00 
100f732e:	e8 6d 04 f2 ff       	call   0x100177a0
100f7333:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100f7336:	f6 80 a4 01 00 00 10 	test   BYTE PTR [eax+0x1a4],0x10
100f733d:	74 07                	je     0x100f7346
100f733f:	83 8b 00 25 00 00 08 	or     DWORD PTR [ebx+0x2500],0x8
100f7346:	8b ce                	mov    ecx,esi
100f7348:	e8 53 04 f2 ff       	call   0x100177a0
100f734d:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100f7350:	f6 80 a4 01 00 00 20 	test   BYTE PTR [eax+0x1a4],0x20
100f7357:	74 0a                	je     0x100f7363
100f7359:	c7 83 b4 1e 00 00 01 	mov    DWORD PTR [ebx+0x1eb4],0x1
100f7360:	00 00 00 
100f7363:	8b ce                	mov    ecx,esi
100f7365:	e8 36 04 f2 ff       	call   0x100177a0
100f736a:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100f736d:	83 b8 4c 02 00 00 00 	cmp    DWORD PTR [eax+0x24c],0x0
100f7374:	74 07                	je     0x100f737d
100f7376:	83 8b 00 25 00 00 10 	or     DWORD PTR [ebx+0x2500],0x10
100f737d:	8b ce                	mov    ecx,esi
100f737f:	e8 1c 04 f2 ff       	call   0x100177a0
100f7384:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100f7387:	f7 80 a4 01 00 00 00 	test   DWORD PTR [eax+0x1a4],0x100
100f738e:	01 00 00 
100f7391:	74 45                	je     0x100f73d8
100f7393:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f7396:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f739c:	6a 00                	push   0x0
100f739e:	ff 35 f4 65 22 10    	push   DWORD PTR ds:0x102265f4
100f73a4:	6a 01                	push   0x1
100f73a6:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f73ac:	6a 01                	push   0x1
100f73ae:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f73b4:	6a 01                	push   0x1
100f73b6:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f73bc:	68 96 24 1a 10       	push   0x101a2496
100f73c1:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f73c7:	6a 00                	push   0x0
100f73c9:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f73cf:	83 c4 20             	add    esp,0x20
100f73d2:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f73d8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f73dd:	be 01 00 00 00       	mov    esi,0x1
100f73e2:	39 b0 90 00 00 00    	cmp    DWORD PTR [eax+0x90],esi
100f73e8:	7c 49                	jl     0x100f7433
100f73ea:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100f73f0:	56                   	push   esi
100f73f1:	e8 8a 22 02 00       	call   0x10119680
100f73f6:	8b f8                	mov    edi,eax
100f73f8:	83 c4 04             	add    esp,0x4
100f73fb:	85 ff                	test   edi,edi
100f73fd:	74 26                	je     0x100f7425
100f73ff:	8d 8f 48 23 00 00    	lea    ecx,[edi+0x2348]
100f7405:	e8 76 03 f2 ff       	call   0x10017780
100f740a:	85 c0                	test   eax,eax
100f740c:	74 17                	je     0x100f7425
100f740e:	8d 8f 48 23 00 00    	lea    ecx,[edi+0x2348]
100f7414:	e8 87 03 f2 ff       	call   0x100177a0
100f7419:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100f741c:	83 b8 48 02 00 00 00 	cmp    DWORD PTR [eax+0x248],0x0
100f7423:	75 59                	jne    0x100f747e
100f7425:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f742a:	46                   	inc    esi
100f742b:	3b b0 90 00 00 00    	cmp    esi,DWORD PTR [eax+0x90]
100f7431:	7e bd                	jle    0x100f73f0
100f7433:	80 7d ff 00          	cmp    BYTE PTR [ebp-0x1],0x0
100f7437:	75 13                	jne    0x100f744c
100f7439:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f743c:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100f7442:	50                   	push   eax
100f7443:	50                   	push   eax
100f7444:	e8 37 fd 01 00       	call   0x10117180
100f7449:	83 c4 08             	add    esp,0x8
100f744c:	80 bb 9c 1e 00 00 00 	cmp    BYTE PTR [ebx+0x1e9c],0x0
100f7453:	8d b3 00 22 00 00    	lea    esi,[ebx+0x2200]
100f7459:	bf 01 00 00 00       	mov    edi,0x1
100f745e:	0f 84 2c 01 00 00    	je     0x100f7590
100f7464:	6a 00                	push   0x0
100f7466:	ff 36                	push   DWORD PTR [esi]
100f7468:	8b cb                	mov    ecx,ebx
100f746a:	57                   	push   edi
100f746b:	e8 f0 ce fe ff       	call   0x100e4360
100f7470:	47                   	inc    edi
100f7471:	8d 76 04             	lea    esi,[esi+0x4]
100f7474:	83 ff 03             	cmp    edi,0x3
100f7477:	7e eb                	jle    0x100f7464
100f7479:	e9 27 01 00 00       	jmp    0x100f75a5
100f747e:	8b 87 48 23 00 00    	mov    eax,DWORD PTR [edi+0x2348]
100f7484:	8d b7 48 23 00 00    	lea    esi,[edi+0x2348]
100f748a:	89 83 48 23 00 00    	mov    DWORD PTR [ebx+0x2348],eax
100f7490:	8b ce                	mov    ecx,esi
100f7492:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f7495:	89 83 4c 23 00 00    	mov    DWORD PTR [ebx+0x234c],eax
100f749b:	e8 00 03 f2 ff       	call   0x100177a0
100f74a0:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100f74a3:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f74a9:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f74ac:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f74b2:	e8 c9 fc 01 00       	call   0x10117180
100f74b7:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f74ba:	83 c4 08             	add    esp,0x8
100f74bd:	8b ce                	mov    ecx,esi
100f74bf:	81 88 a8 01 00 00 80 	or     DWORD PTR [eax+0x1a8],0x80
100f74c6:	00 00 00 
100f74c9:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f74cc:	c7 80 70 01 00 00 00 	mov    DWORD PTR [eax+0x170],0x0
100f74d3:	00 00 00 
100f74d6:	e8 c5 02 f2 ff       	call   0x100177a0
100f74db:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100f74de:	f6 80 a4 01 00 00 10 	test   BYTE PTR [eax+0x1a4],0x10
100f74e5:	74 07                	je     0x100f74ee
100f74e7:	83 8b 00 25 00 00 08 	or     DWORD PTR [ebx+0x2500],0x8
100f74ee:	8b ce                	mov    ecx,esi
100f74f0:	e8 ab 02 f2 ff       	call   0x100177a0
100f74f5:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100f74f8:	f6 80 a4 01 00 00 20 	test   BYTE PTR [eax+0x1a4],0x20
100f74ff:	74 0a                	je     0x100f750b
100f7501:	c7 83 b4 1e 00 00 01 	mov    DWORD PTR [ebx+0x1eb4],0x1
100f7508:	00 00 00 
100f750b:	8b ce                	mov    ecx,esi
100f750d:	e8 8e 02 f2 ff       	call   0x100177a0
100f7512:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100f7515:	83 b8 4c 02 00 00 00 	cmp    DWORD PTR [eax+0x24c],0x0
100f751c:	74 07                	je     0x100f7525
100f751e:	83 8b 00 25 00 00 10 	or     DWORD PTR [ebx+0x2500],0x10
100f7525:	8b ce                	mov    ecx,esi
100f7527:	e8 74 02 f2 ff       	call   0x100177a0
100f752c:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100f752f:	f7 80 a4 01 00 00 00 	test   DWORD PTR [eax+0x1a4],0x100
100f7536:	01 00 00 
100f7539:	0f 84 0d ff ff ff    	je     0x100f744c
100f753f:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100f7542:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f7548:	6a 00                	push   0x0
100f754a:	ff 35 f4 65 22 10    	push   DWORD PTR ds:0x102265f4
100f7550:	6a 01                	push   0x1
100f7552:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100f7558:	6a 01                	push   0x1
100f755a:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7560:	6a 01                	push   0x1
100f7562:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f7568:	68 96 24 1a 10       	push   0x101a2496
100f756d:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100f7573:	6a 00                	push   0x0
100f7575:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100f757b:	83 c4 20             	add    esp,0x20
100f757e:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100f7584:	e9 c3 fe ff ff       	jmp    0x100f744c
