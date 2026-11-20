
D:\Steam\steamapps\common\Cry of Fear\hw.dll:     file format pei-i386


Disassembly of section .text:

01de0e44 <.text+0xdfe44>:
 1de0e44:	55                   	push   ebp
 1de0e45:	8b ec                	mov    ebp,esp
 1de0e47:	83 ec 10             	sub    esp,0x10
 1de0e4a:	c7 45 f0 00 00 00 00 	mov    DWORD PTR [ebp-0x10],0x0
 1de0e51:	c7 45 f4 00 00 00 00 	mov    DWORD PTR [ebp-0xc],0x0
 1de0e58:	81 3d d0 9d ec 01 ff 	cmp    DWORD PTR ds:0x1ec9dd0,0xff
 1de0e5f:	00 00 00 
 1de0e62:	7e 07                	jle    0x1de0e6b
 1de0e64:	33 c0                	xor    eax,eax
 1de0e66:	e9 eb 00 00 00       	jmp    0x1de0f56
 1de0e6b:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
 1de0e6f:	75 07                	jne    0x1de0e78
 1de0e71:	33 c0                	xor    eax,eax
 1de0e73:	e9 de 00 00 00       	jmp    0x1de0f56
 1de0e78:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1de0e7b:	50                   	push   eax
 1de0e7c:	e8 41 58 f6 ff       	call   0x1d466c2
 1de0e81:	83 c4 04             	add    esp,0x4
 1de0e84:	83 f8 0b             	cmp    eax,0xb
 1de0e87:	7e 07                	jle    0x1de0e90
 1de0e89:	33 c0                	xor    eax,eax
 1de0e8b:	e9 c6 00 00 00       	jmp    0x1de0f56
 1de0e90:	81 7d 0c c0 00 00 00 	cmp    DWORD PTR [ebp+0xc],0xc0
 1de0e97:	7e 07                	jle    0x1de0ea0
 1de0e99:	33 c0                	xor    eax,eax
 1de0e9b:	e9 b6 00 00 00       	jmp    0x1de0f56
 1de0ea0:	8b 0d ac 88 49 02    	mov    ecx,DWORD PTR ds:0x24988ac
 1de0ea6:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
 1de0ea9:	83 7d fc 00          	cmp    DWORD PTR [ebp-0x4],0x0
 1de0ead:	74 2b                	je     0x1de0eda
 1de0eaf:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
 1de0eb2:	83 c2 08             	add    edx,0x8
 1de0eb5:	52                   	push   edx
 1de0eb6:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1de0eb9:	50                   	push   eax
 1de0eba:	e8 b0 58 f6 ff       	call   0x1d4676f
 1de0ebf:	83 c4 08             	add    esp,0x8
 1de0ec2:	85 c0                	test   eax,eax
 1de0ec4:	75 09                	jne    0x1de0ecf
 1de0ec6:	c7 45 f0 01 00 00 00 	mov    DWORD PTR [ebp-0x10],0x1
 1de0ecd:	eb 0b                	jmp    0x1de0eda
 1de0ecf:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
 1de0ed2:	8b 51 18             	mov    edx,DWORD PTR [ecx+0x18]
 1de0ed5:	89 55 fc             	mov    DWORD PTR [ebp-0x4],edx
 1de0ed8:	eb cf                	jmp    0x1de0ea9
 1de0eda:	83 7d f0 00          	cmp    DWORD PTR [ebp-0x10],0x0
 1de0ede:	74 0a                	je     0x1de0eea
 1de0ee0:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
 1de0ee3:	8b 08                	mov    ecx,DWORD PTR [eax]
 1de0ee5:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
 1de0ee8:	eb 69                	jmp    0x1de0f53
 1de0eea:	6a 20                	push   0x20
 1de0eec:	e8 a0 c0 fa ff       	call   0x1d8cf91
 1de0ef1:	83 c4 04             	add    esp,0x4
 1de0ef4:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
 1de0ef7:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
 1de0efa:	a1 d0 9d ec 01       	mov    eax,ds:0x1ec9dd0
 1de0eff:	89 02                	mov    DWORD PTR [edx],eax
 1de0f01:	8b 0d d0 9d ec 01    	mov    ecx,DWORD PTR ds:0x1ec9dd0
 1de0f07:	83 c1 01             	add    ecx,0x1
 1de0f0a:	89 0d d0 9d ec 01    	mov    DWORD PTR ds:0x1ec9dd0,ecx
 1de0f10:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
 1de0f13:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
 1de0f16:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
 1de0f19:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1de0f1c:	51                   	push   ecx
 1de0f1d:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
 1de0f20:	83 c2 08             	add    edx,0x8
 1de0f23:	52                   	push   edx
 1de0f24:	e8 f9 56 f6 ff       	call   0x1d46622
 1de0f29:	83 c4 08             	add    esp,0x8
 1de0f2c:	83 7d f8 00          	cmp    DWORD PTR [ebp-0x8],0x0
 1de0f30:	75 04                	jne    0x1de0f36
 1de0f32:	33 c0                	xor    eax,eax
 1de0f34:	eb 20                	jmp    0x1de0f56
 1de0f36:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
 1de0f39:	8b 0d a8 88 49 02    	mov    ecx,DWORD PTR ds:0x24988a8
 1de0f3f:	89 48 18             	mov    DWORD PTR [eax+0x18],ecx
 1de0f42:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
 1de0f45:	89 15 a8 88 49 02    	mov    DWORD PTR ds:0x24988a8,edx
 1de0f4b:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
 1de0f4e:	8b 08                	mov    ecx,DWORD PTR [eax]
 1de0f50:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
 1de0f53:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
 1de0f56:	8b e5                	mov    esp,ebp
 1de0f58:	5d                   	pop    ebp
 1de0f59:	c3                   	ret
