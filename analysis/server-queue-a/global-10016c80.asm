
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10016c80 <.text+0x15c80>:
10016c80:	55                   	push   ebp
10016c81:	8b ec                	mov    ebp,esp
10016c83:	6a ff                	push   0xffffffff
10016c85:	68 db d1 19 10       	push   0x1019d1db
10016c8a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10016c90:	50                   	push   eax
10016c91:	81 ec e0 02 00 00    	sub    esp,0x2e0
10016c97:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10016c9c:	33 c5                	xor    eax,ebp
10016c9e:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
10016ca1:	53                   	push   ebx
10016ca2:	56                   	push   esi
10016ca3:	57                   	push   edi
10016ca4:	50                   	push   eax
10016ca5:	8d 45 f4             	lea    eax,[ebp-0xc]
10016ca8:	64 a3 00 00 00 00    	mov    fs:0x0,eax
10016cae:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10016cb1:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
10016cb4:	85 db                	test   ebx,ebx
10016cb6:	0f 84 19 03 00 00    	je     0x10016fd5
10016cbc:	8b 73 7c             	mov    esi,DWORD PTR [ebx+0x7c]
10016cbf:	85 f6                	test   esi,esi
10016cc1:	0f 84 0e 03 00 00    	je     0x10016fd5
10016cc7:	85 ff                	test   edi,edi
10016cc9:	0f 84 06 03 00 00    	je     0x10016fd5
10016ccf:	57                   	push   edi
10016cd0:	8d 8d 34 fd ff ff    	lea    ecx,[ebp-0x2cc]
10016cd6:	e8 45 f3 0f 00       	call   0x10116020
10016cdb:	c7 85 38 fd ff ff 00 	mov    DWORD PTR [ebp-0x2c8],0x0
10016ce2:	00 00 00 
10016ce5:	c7 85 3c fd ff ff 01 	mov    DWORD PTR [ebp-0x2c4],0x1
10016cec:	00 00 00 
10016cef:	83 7d 10 00          	cmp    DWORD PTR [ebp+0x10],0x0
10016cf3:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
10016cfa:	0f 84 85 01 00 00    	je     0x10016e85
10016d00:	57                   	push   edi
10016d01:	8d 8d 28 fd ff ff    	lea    ecx,[ebp-0x2d8]
10016d07:	e8 14 f3 0f 00       	call   0x10116020
10016d0c:	c7 85 2c fd ff ff 00 	mov    DWORD PTR [ebp-0x2d4],0x0
10016d13:	00 00 00 
10016d16:	8d 85 44 fd ff ff    	lea    eax,[ebp-0x2bc]
10016d1c:	c6 45 fc 01          	mov    BYTE PTR [ebp-0x4],0x1
10016d20:	50                   	push   eax
10016d21:	68 28 61 1a 10       	push   0x101a6128
10016d26:	8d 8d 28 fd ff ff    	lea    ecx,[ebp-0x2d8]
10016d2c:	c7 85 30 fd ff ff 00 	mov    DWORD PTR [ebp-0x2d0],0x0
10016d33:	00 00 00 
10016d36:	e8 f5 fe 0f 00       	call   0x10116c30
10016d3b:	8b 47 1c             	mov    eax,DWORD PTR [edi+0x1c]
10016d3e:	ff b5 48 fd ff ff    	push   DWORD PTR [ebp-0x2b8]
10016d44:	8d 0c 40             	lea    ecx,[eax+eax*2]
10016d47:	8b 47 28             	mov    eax,DWORD PTR [edi+0x28]
10016d4a:	8b 4c c8 08          	mov    ecx,DWORD PTR [eax+ecx*8+0x8]
10016d4e:	8b 07                	mov    eax,DWORD PTR [edi]
10016d50:	03 c1                	add    eax,ecx
10016d52:	89 4f 08             	mov    DWORD PTR [edi+0x8],ecx
10016d55:	b9 78 22 23 10       	mov    ecx,0x10232278
10016d5a:	89 47 04             	mov    DWORD PTR [edi+0x4],eax
10016d5d:	e8 7e 99 10 00       	call   0x101206e0
10016d62:	83 c0 40             	add    eax,0x40
10016d65:	50                   	push   eax
10016d66:	8d 87 54 05 00 00    	lea    eax,[edi+0x554]
10016d6c:	50                   	push   eax
10016d6d:	e8 2e 3e ff ff       	call   0x1000aba0
10016d72:	83 c4 08             	add    esp,0x8
10016d75:	85 c0                	test   eax,eax
10016d77:	0f 84 e9 00 00 00    	je     0x10016e66
10016d7d:	ff b5 48 fd ff ff    	push   DWORD PTR [ebp-0x2b8]
10016d83:	f3 0f 7e 87 44 05 00 	movq   xmm0,QWORD PTR [edi+0x544]
10016d8a:	00 
10016d8b:	8b 87 4c 05 00 00    	mov    eax,DWORD PTR [edi+0x54c]
10016d91:	ff b5 44 fd ff ff    	push   DWORD PTR [ebp-0x2bc]
10016d97:	66 0f d6 85 20 fd ff 	movq   QWORD PTR [ebp-0x2e0],xmm0
10016d9e:	ff 
10016d9f:	89 85 40 fd ff ff    	mov    DWORD PTR [ebp-0x2c0],eax
10016da5:	e8 56 0d 00 00       	call   0x10017b00
10016daa:	8b f0                	mov    esi,eax
10016dac:	83 c4 08             	add    esp,0x8
10016daf:	85 f6                	test   esi,esi
10016db1:	0f 84 af 00 00 00    	je     0x10016e66
10016db7:	f3 0f 10 87 44 05 00 	movss  xmm0,DWORD PTR [edi+0x544]
10016dbe:	00 
10016dbf:	f3 0f 10 8f 48 05 00 	movss  xmm1,DWORD PTR [edi+0x548]
10016dc6:	00 
10016dc7:	f3 0f 10 97 4c 05 00 	movss  xmm2,DWORD PTR [edi+0x54c]
10016dce:	00 
10016dcf:	f3 0f 10 a5 20 fe ff 	movss  xmm4,DWORD PTR [ebp-0x1e0]
10016dd6:	ff 
10016dd7:	f3 0f 10 9d 24 fe ff 	movss  xmm3,DWORD PTR [ebp-0x1dc]
10016dde:	ff 
10016ddf:	c7 85 38 fd ff ff 01 	mov    DWORD PTR [ebp-0x2c8],0x1
10016de6:	00 00 00 
10016de9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10016dec:	f3 0f 5c 80 dc 00 00 	subss  xmm0,DWORD PTR [eax+0xdc]
10016df3:	00 
10016df4:	f3 0f 5c 88 e0 00 00 	subss  xmm1,DWORD PTR [eax+0xe0]
10016dfb:	00 
10016dfc:	f3 0f 5c 90 e4 00 00 	subss  xmm2,DWORD PTR [eax+0xe4]
10016e03:	00 
10016e04:	f3 0f 58 e0          	addss  xmm4,xmm0
10016e08:	f3 0f 10 85 28 fe ff 	movss  xmm0,DWORD PTR [ebp-0x1d8]
10016e0f:	ff 
10016e10:	f3 0f 58 d9          	addss  xmm3,xmm1
10016e14:	f3 0f 58 c2          	addss  xmm0,xmm2
10016e18:	0f 14 e3             	unpcklps xmm4,xmm3
10016e1b:	66 0f d6 a7 44 05 00 	movq   QWORD PTR [edi+0x544],xmm4
10016e22:	00 
10016e23:	f3 0f 11 85 1c fd ff 	movss  DWORD PTR [ebp-0x2e4],xmm0
10016e2a:	ff 
10016e2b:	8b 85 1c fd ff ff    	mov    eax,DWORD PTR [ebp-0x2e4]
10016e31:	89 87 4c 05 00 00    	mov    DWORD PTR [edi+0x54c],eax
10016e37:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10016e3c:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10016e3f:	ff 70 0c             	push   DWORD PTR [eax+0xc]
10016e42:	8b 99 0c 02 00 00    	mov    ebx,DWORD PTR [ecx+0x20c]
10016e48:	ff 71 04             	push   DWORD PTR [ecx+0x4]
10016e4b:	b9 78 22 23 10       	mov    ecx,0x10232278
10016e50:	e8 db 98 10 00       	call   0x10120730
10016e55:	8d 8d 28 fd ff ff    	lea    ecx,[ebp-0x2d8]
10016e5b:	c6 45 fc 00          	mov    BYTE PTR [ebp-0x4],0x0
10016e5f:	e8 1c f2 0f 00       	call   0x10116080
10016e64:	eb 3b                	jmp    0x10016ea1
10016e66:	8d 8d 28 fd ff ff    	lea    ecx,[ebp-0x2d8]
10016e6c:	e8 0f f2 0f 00       	call   0x10116080
10016e71:	8d 8d 34 fd ff ff    	lea    ecx,[ebp-0x2cc]
10016e77:	33 f6                	xor    esi,esi
10016e79:	e8 02 f2 0f 00       	call   0x10116080
10016e7e:	8b c6                	mov    eax,esi
10016e80:	e9 52 01 00 00       	jmp    0x10016fd7
10016e85:	f3 0f 7e 85 14 fd ff 	movq   xmm0,QWORD PTR [ebp-0x2ec]
10016e8c:	ff 
10016e8d:	8b 85 1c fd ff ff    	mov    eax,DWORD PTR [ebp-0x2e4]
10016e93:	89 85 40 fd ff ff    	mov    DWORD PTR [ebp-0x2c0],eax
10016e99:	66 0f d6 85 20 fd ff 	movq   QWORD PTR [ebp-0x2e0],xmm0
10016ea0:	ff 
10016ea1:	8b 06                	mov    eax,DWORD PTR [esi]
10016ea3:	8b ce                	mov    ecx,esi
10016ea5:	ff 50 40             	call   DWORD PTR [eax+0x40]
10016ea8:	8b 16                	mov    edx,DWORD PTR [esi]
10016eaa:	83 e0 04             	and    eax,0x4
10016ead:	8d 85 34 fd ff ff    	lea    eax,[ebp-0x2cc]
10016eb3:	8b ce                	mov    ecx,esi
10016eb5:	50                   	push   eax
10016eb6:	74 0c                	je     0x10016ec4
10016eb8:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
10016ebb:	8b 06                	mov    eax,DWORD PTR [esi]
10016ebd:	8b ce                	mov    ecx,esi
10016ebf:	ff 50 2c             	call   DWORD PTR [eax+0x2c]
10016ec2:	eb 0a                	jmp    0x10016ece
10016ec4:	ff 52 3c             	call   DWORD PTR [edx+0x3c]
10016ec7:	8b 06                	mov    eax,DWORD PTR [esi]
10016ec9:	8b ce                	mov    ecx,esi
10016ecb:	ff 50 30             	call   DWORD PTR [eax+0x30]
10016ece:	85 db                	test   ebx,ebx
10016ed0:	74 05                	je     0x10016ed7
10016ed2:	8b 73 7c             	mov    esi,DWORD PTR [ebx+0x7c]
10016ed5:	eb 02                	jmp    0x10016ed9
10016ed7:	33 f6                	xor    esi,esi
10016ed9:	83 7d 10 00          	cmp    DWORD PTR [ebp+0x10],0x0
10016edd:	74 43                	je     0x10016f22
10016edf:	f3 0f 7e 85 20 fd ff 	movq   xmm0,QWORD PTR [ebp-0x2e0]
10016ee6:	ff 
10016ee7:	8b 85 40 fd ff ff    	mov    eax,DWORD PTR [ebp-0x2c0]
10016eed:	66 0f d6 87 44 05 00 	movq   QWORD PTR [edi+0x544],xmm0
10016ef4:	00 
10016ef5:	89 87 4c 05 00 00    	mov    DWORD PTR [edi+0x54c],eax
10016efb:	85 f6                	test   esi,esi
10016efd:	0f 84 c7 00 00 00    	je     0x10016fca
10016f03:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10016f06:	83 c0 08             	add    eax,0x8
10016f09:	50                   	push   eax
10016f0a:	56                   	push   esi
10016f0b:	e8 d0 30 10 00       	call   0x10119fe0
10016f10:	8b 06                	mov    eax,DWORD PTR [esi]
10016f12:	83 c4 08             	add    esp,0x8
10016f15:	8b ce                	mov    ecx,esi
10016f17:	ff 90 a0 00 00 00    	call   DWORD PTR [eax+0xa0]
10016f1d:	e9 a8 00 00 00       	jmp    0x10016fca
10016f22:	85 f6                	test   esi,esi
10016f24:	0f 84 a0 00 00 00    	je     0x10016fca
10016f2a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10016f2d:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10016f30:	85 c0                	test   eax,eax
10016f32:	0f 84 92 00 00 00    	je     0x10016fca
10016f38:	50                   	push   eax
10016f39:	b9 78 22 23 10       	mov    ecx,0x10232278
10016f3e:	e8 9d 97 10 00       	call   0x101206e0
10016f43:	85 c0                	test   eax,eax
10016f45:	74 40                	je     0x10016f87
10016f47:	83 78 60 02          	cmp    DWORD PTR [eax+0x60],0x2
10016f4b:	75 12                	jne    0x10016f5f
10016f4d:	8d 8d 34 fd ff ff    	lea    ecx,[ebp-0x2cc]
10016f53:	83 ce ff             	or     esi,0xffffffff
10016f56:	e8 25 f1 0f 00       	call   0x10116080
10016f5b:	8b c6                	mov    eax,esi
10016f5d:	eb 78                	jmp    0x10016fd7
10016f5f:	83 c0 40             	add    eax,0x40
10016f62:	50                   	push   eax
10016f63:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10016f68:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
10016f6e:	03 48 0c             	add    ecx,DWORD PTR [eax+0xc]
10016f71:	51                   	push   ecx
10016f72:	e8 29 3c ff ff       	call   0x1000aba0
10016f77:	83 c4 08             	add    esp,0x8
10016f7a:	85 c0                	test   eax,eax
10016f7c:	75 4c                	jne    0x10016fca
10016f7e:	8b ce                	mov    ecx,esi
10016f80:	e8 9b 0e 00 00       	call   0x10017e20
10016f85:	eb 43                	jmp    0x10016fca
10016f87:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10016f8c:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10016f8f:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
10016f95:	8b 02                	mov    eax,DWORD PTR [edx]
10016f97:	03 c1                	add    eax,ecx
10016f99:	50                   	push   eax
10016f9a:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
10016f9d:	03 c1                	add    eax,ecx
10016f9f:	50                   	push   eax
10016fa0:	68 30 61 1a 10       	push   0x101a6130
10016fa5:	6a 04                	push   0x4
10016fa7:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10016fad:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10016fb2:	83 c4 10             	add    esp,0x10
10016fb5:	b9 78 22 23 10       	mov    ecx,0x10232278
10016fba:	6a 01                	push   0x1
10016fbc:	ff 70 0c             	push   DWORD PTR [eax+0xc]
10016fbf:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10016fc2:	ff 70 04             	push   DWORD PTR [eax+0x4]
10016fc5:	e8 a6 96 10 00       	call   0x10120670
10016fca:	8d 8d 34 fd ff ff    	lea    ecx,[ebp-0x2cc]
10016fd0:	e8 ab f0 0f 00       	call   0x10116080
10016fd5:	33 c0                	xor    eax,eax
10016fd7:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
10016fda:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
10016fe1:	59                   	pop    ecx
10016fe2:	5f                   	pop    edi
10016fe3:	5e                   	pop    esi
10016fe4:	5b                   	pop    ebx
10016fe5:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
10016fe8:	33 cd                	xor    ecx,ebp
10016fea:	e8 c4 6b 12 00       	call   0x1013dbb3
10016fef:	8b e5                	mov    esp,ebp
10016ff1:	5d                   	pop    ebp
10016ff2:	c3                   	ret
