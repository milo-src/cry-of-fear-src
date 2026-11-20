
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

10070ee0 <.text+0x6fee0>:
10070ee0:	55                   	push   ebp
10070ee1:	8b ec                	mov    ebp,esp
10070ee3:	81 ec 0c 01 00 00    	sub    esp,0x10c
10070ee9:	a1 00 06 19 10       	mov    eax,ds:0x10190600
10070eee:	33 c5                	xor    eax,ebp
10070ef0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10070ef3:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
10070ef6:	56                   	push   esi
10070ef7:	57                   	push   edi
10070ef8:	ff 75 10             	push   DWORD PTR [ebp+0x10]
10070efb:	50                   	push   eax
10070efc:	e8 4f f9 00 00       	call   0x10080850
10070f01:	83 c4 08             	add    esp,0x8
10070f04:	e8 a7 f9 00 00       	call   0x100808b0
10070f09:	8b f8                	mov    edi,eax
10070f0b:	e8 a0 f9 00 00       	call   0x100808b0
10070f10:	8b f0                	mov    esi,eax
10070f12:	e8 f9 f9 00 00       	call   0x10080910
10070f17:	68 00 01 00 00       	push   0x100
10070f1c:	d9 9d f4 fe ff ff    	fstp   DWORD PTR [ebp-0x10c]
10070f22:	e8 39 fb 00 00       	call   0x10080a60
10070f27:	50                   	push   eax
10070f28:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
10070f2e:	50                   	push   eax
10070f2f:	e8 cc d8 08 00       	call   0x100fe800
10070f34:	68 d8 ef 14 10       	push   0x1014efd8
10070f39:	ff 15 44 26 1b 10    	call   DWORD PTR ds:0x101b2644
10070f3f:	d9 9d f8 fe ff ff    	fstp   DWORD PTR [ebp-0x108]
10070f45:	f3 0f 10 85 f8 fe ff 	movss  xmm0,DWORD PTR [ebp-0x108]
10070f4c:	ff 
10070f4d:	83 c4 10             	add    esp,0x10
10070f50:	0f 2e 05 f0 cc 13 10 	ucomiss xmm0,DWORD PTR ds:0x1013ccf0
10070f57:	9f                   	lahf
10070f58:	f6 c4 44             	test   ah,0x44
10070f5b:	7a 19                	jp     0x10070f76
10070f5d:	68 00 01 00 00       	push   0x100
10070f62:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
10070f68:	68 f0 ef 14 10       	push   0x1014eff0
10070f6d:	50                   	push   eax
10070f6e:	e8 8d d8 08 00       	call   0x100fe800
10070f73:	83 c4 0c             	add    esp,0xc
10070f76:	85 f6                	test   esi,esi
10070f78:	74 6b                	je     0x10070fe5
10070f7a:	f3 0f 10 85 f4 fe ff 	movss  xmm0,DWORD PTR [ebp-0x10c]
10070f81:	ff 
10070f82:	0f 2e 05 ec cc 13 10 	ucomiss xmm0,DWORD PTR ds:0x1013ccec
10070f89:	9f                   	lahf
10070f8a:	f6 c4 44             	test   ah,0x44
10070f8d:	7b 2a                	jnp    0x10070fb9
10070f8f:	51                   	push   ecx
10070f90:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10070f95:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
10070f9b:	83 ec 0c             	sub    esp,0xc
10070f9e:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
10070fa2:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0xbf800000
10070fa9:	bf 
10070faa:	c7 04 24 00 00 80 bf 	mov    DWORD PTR [esp],0xbf800000
10070fb1:	e8 9a eb 00 00       	call   0x1007fb50
10070fb6:	83 c4 10             	add    esp,0x10
10070fb9:	85 ff                	test   edi,edi
10070fbb:	0f 95 85 f8 fe ff ff 	setne  BYTE PTR [ebp-0x108]
10070fc2:	ff b5 f8 fe ff ff    	push   DWORD PTR [ebp-0x108]
10070fc8:	e8 e3 eb 00 00       	call   0x1007fbb0
10070fcd:	6a 00                	push   0x0
10070fcf:	e8 1c ec 00 00       	call   0x1007fbf0
10070fd4:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
10070fda:	50                   	push   eax
10070fdb:	e8 10 eb 00 00       	call   0x1007faf0
10070fe0:	83 c4 0c             	add    esp,0xc
10070fe3:	eb 1c                	jmp    0x10071001
10070fe5:	6a 01                	push   0x1
10070fe7:	e8 04 ec 00 00       	call   0x1007fbf0
10070fec:	f3 0f 10 85 f4 fe ff 	movss  xmm0,DWORD PTR [ebp-0x10c]
10070ff3:	ff 
10070ff4:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10070ff9:	e8 12 ec 00 00       	call   0x1007fc10
10070ffe:	83 c4 04             	add    esp,0x4
10071001:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10071004:	b8 01 00 00 00       	mov    eax,0x1
10071009:	5f                   	pop    edi
1007100a:	33 cd                	xor    ecx,ebp
1007100c:	5e                   	pop    esi
1007100d:	e8 ae 32 04 00       	call   0x100b42c0
10071012:	8b e5                	mov    esp,ebp
10071014:	5d                   	pop    ebp
10071015:	c3                   	ret
