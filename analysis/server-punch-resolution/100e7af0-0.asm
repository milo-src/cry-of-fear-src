
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e7af0 <.text+0xe6af0>:
100e7af0:	55                   	push   ebp
100e7af1:	8b ec                	mov    ebp,esp
100e7af3:	83 ec 68             	sub    esp,0x68
100e7af6:	56                   	push   esi
100e7af7:	8b f1                	mov    esi,ecx
100e7af9:	57                   	push   edi
100e7afa:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e7afd:	83 c0 74             	add    eax,0x74
100e7b00:	50                   	push   eax
100e7b01:	e8 1a 18 03 00       	call   0x10119320
100e7b06:	8b 06                	mov    eax,DWORD PTR [esi]
100e7b08:	8d 4d f4             	lea    ecx,[ebp-0xc]
100e7b0b:	83 c4 04             	add    esp,0x4
100e7b0e:	51                   	push   ecx
100e7b0f:	8b ce                	mov    ecx,esi
100e7b11:	ff 90 28 02 00 00    	call   DWORD PTR [eax+0x228]
100e7b17:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e7b1c:	f3 0f 10 05 28 97 1a 	movss  xmm0,DWORD PTR ds:0x101a9728
100e7b23:	10 
100e7b24:	f3 0f 10 65 f4       	movss  xmm4,DWORD PTR [ebp-0xc]
100e7b29:	f3 0f 10 48 28       	movss  xmm1,DWORD PTR [eax+0x28]
100e7b2e:	f3 0f 10 50 2c       	movss  xmm2,DWORD PTR [eax+0x2c]
100e7b33:	f3 0f 10 58 30       	movss  xmm3,DWORD PTR [eax+0x30]
100e7b38:	8d 45 98             	lea    eax,[ebp-0x68]
100e7b3b:	f3 0f 59 c8          	mulss  xmm1,xmm0
100e7b3f:	50                   	push   eax
100e7b40:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e7b43:	f3 0f 59 d0          	mulss  xmm2,xmm0
100e7b47:	f3 0f 59 d8          	mulss  xmm3,xmm0
100e7b4b:	f3 0f 58 e1          	addss  xmm4,xmm1
100e7b4f:	f3 0f 10 4d f8       	movss  xmm1,DWORD PTR [ebp-0x8]
100e7b54:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100e7b59:	f3 0f 58 ca          	addss  xmm1,xmm2
100e7b5d:	f3 0f 58 c3          	addss  xmm0,xmm3
100e7b61:	f3 0f 11 65 e8       	movss  DWORD PTR [ebp-0x18],xmm4
100e7b66:	f3 0f 11 4d ec       	movss  DWORD PTR [ebp-0x14],xmm1
100e7b6b:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
100e7b70:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e7b76:	8d 45 e8             	lea    eax,[ebp-0x18]
100e7b79:	6a 00                	push   0x0
100e7b7b:	50                   	push   eax
100e7b7c:	8d 45 f4             	lea    eax,[ebp-0xc]
100e7b7f:	50                   	push   eax
100e7b80:	e8 7b 2c 03 00       	call   0x1011a800
100e7b85:	f3 0f 10 45 a8       	movss  xmm0,DWORD PTR [ebp-0x58]
100e7b8a:	83 c4 14             	add    esp,0x14
100e7b8d:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
100e7b94:	10 
100e7b95:	0f 2f c1             	comiss xmm0,xmm1
100e7b98:	0f 82 c3 00 00 00    	jb     0x100e7c61
100e7b9e:	8d 45 98             	lea    eax,[ebp-0x68]
100e7ba1:	50                   	push   eax
100e7ba2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e7ba5:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e7bab:	8d 45 e8             	lea    eax,[ebp-0x18]
100e7bae:	6a 03                	push   0x3
100e7bb0:	6a 00                	push   0x0
100e7bb2:	50                   	push   eax
100e7bb3:	8d 45 f4             	lea    eax,[ebp-0xc]
100e7bb6:	50                   	push   eax
100e7bb7:	e8 24 2c 03 00       	call   0x1011a7e0
100e7bbc:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
100e7bc3:	10 
100e7bc4:	83 c4 18             	add    esp,0x18
100e7bc7:	0f 2f 45 a8          	comiss xmm0,DWORD PTR [ebp-0x58]
100e7bcb:	0f 86 c3 01 00 00    	jbe    0x100e7d94
100e7bd1:	8b 45 c8             	mov    eax,DWORD PTR [ebp-0x38]
100e7bd4:	85 c0                	test   eax,eax
100e7bd6:	75 0e                	jne    0x100e7be6
100e7bd8:	50                   	push   eax
100e7bd9:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100e7bdf:	83 c4 04             	add    esp,0x4
100e7be2:	85 c0                	test   eax,eax
100e7be4:	74 13                	je     0x100e7bf9
100e7be6:	8b 48 7c             	mov    ecx,DWORD PTR [eax+0x7c]
100e7be9:	85 c9                	test   ecx,ecx
100e7beb:	74 0c                	je     0x100e7bf9
100e7bed:	8b 01                	mov    eax,DWORD PTR [ecx]
100e7bef:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
100e7bf5:	85 c0                	test   eax,eax
100e7bf7:	74 4b                	je     0x100e7c44
100e7bf9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e7bfc:	8b ce                	mov    ecx,esi
100e7bfe:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100e7c04:	50                   	push   eax
100e7c05:	8d 45 dc             	lea    eax,[ebp-0x24]
100e7c08:	c7 45 dc 00 00 80 41 	mov    DWORD PTR [ebp-0x24],0x41800000
100e7c0f:	50                   	push   eax
100e7c10:	8d 45 d0             	lea    eax,[ebp-0x30]
100e7c13:	c7 45 e0 00 00 80 41 	mov    DWORD PTR [ebp-0x20],0x41800000
100e7c1a:	50                   	push   eax
100e7c1b:	8d 45 98             	lea    eax,[ebp-0x68]
100e7c1e:	c7 45 e4 00 00 90 41 	mov    DWORD PTR [ebp-0x1c],0x41900000
100e7c25:	50                   	push   eax
100e7c26:	8d 45 f4             	lea    eax,[ebp-0xc]
100e7c29:	c7 45 d0 00 00 80 c1 	mov    DWORD PTR [ebp-0x30],0xc1800000
100e7c30:	50                   	push   eax
100e7c31:	c7 45 d4 00 00 80 c1 	mov    DWORD PTR [ebp-0x2c],0xc1800000
100e7c38:	c7 45 d8 00 00 90 c1 	mov    DWORD PTR [ebp-0x28],0xc1900000
100e7c3f:	e8 dc 7b ff ff       	call   0x100df820
100e7c44:	f3 0f 7e 45 ac       	movq   xmm0,QWORD PTR [ebp-0x54]
100e7c49:	8b 45 b4             	mov    eax,DWORD PTR [ebp-0x4c]
100e7c4c:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
100e7c53:	10 
100e7c54:	66 0f d6 45 e8       	movq   QWORD PTR [ebp-0x18],xmm0
100e7c59:	f3 0f 10 45 a8       	movss  xmm0,DWORD PTR [ebp-0x58]
100e7c5e:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100e7c61:	0f 2f c8             	comiss xmm1,xmm0
100e7c64:	0f 86 2a 01 00 00    	jbe    0x100e7d94
100e7c6a:	8b 45 c8             	mov    eax,DWORD PTR [ebp-0x38]
100e7c6d:	85 c0                	test   eax,eax
100e7c6f:	75 0e                	jne    0x100e7c7f
100e7c71:	50                   	push   eax
100e7c72:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100e7c78:	83 c4 04             	add    esp,0x4
100e7c7b:	85 c0                	test   eax,eax
100e7c7d:	74 7c                	je     0x100e7cfb
100e7c7f:	8b 78 7c             	mov    edi,DWORD PTR [eax+0x7c]
100e7c82:	85 ff                	test   edi,edi
100e7c84:	74 75                	je     0x100e7cfb
100e7c86:	e8 e5 43 03 00       	call   0x1011c070
100e7c8b:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
100e7c91:	8d 45 98             	lea    eax,[ebp-0x68]
100e7c94:	68 00 10 00 04       	push   0x4001000
100e7c99:	50                   	push   eax
100e7c9a:	83 ec 0c             	sub    esp,0xc
100e7c9d:	8b 42 28             	mov    eax,DWORD PTR [edx+0x28]
100e7ca0:	8b cc                	mov    ecx,esp
100e7ca2:	51                   	push   ecx
100e7ca3:	89 01                	mov    DWORD PTR [ecx],eax
100e7ca5:	8b 42 2c             	mov    eax,DWORD PTR [edx+0x2c]
100e7ca8:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100e7cab:	8b 42 30             	mov    eax,DWORD PTR [edx+0x30]
100e7cae:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100e7cb1:	8b cf                	mov    ecx,edi
100e7cb3:	f3 0f 10 05 44 68 22 	movss  xmm0,DWORD PTR ds:0x10226844
100e7cba:	10 
100e7cbb:	8b 07                	mov    eax,DWORD PTR [edi]
100e7cbd:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100e7cc2:	ff 76 04             	push   DWORD PTR [esi+0x4]
100e7cc5:	ff 50 60             	call   DWORD PTR [eax+0x60]
100e7cc8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e7ccb:	50                   	push   eax
100e7ccc:	50                   	push   eax
100e7ccd:	e8 1e 3c 03 00       	call   0x1011b8f0
100e7cd2:	8b 07                	mov    eax,DWORD PTR [edi]
100e7cd4:	83 c4 08             	add    esp,0x8
100e7cd7:	8b cf                	mov    ecx,edi
100e7cd9:	ff 50 50             	call   DWORD PTR [eax+0x50]
100e7cdc:	85 c0                	test   eax,eax
100e7cde:	74 1b                	je     0x100e7cfb
100e7ce0:	8b 07                	mov    eax,DWORD PTR [edi]
100e7ce2:	8b cf                	mov    ecx,edi
100e7ce4:	ff 50 50             	call   DWORD PTR [eax+0x50]
100e7ce7:	83 f8 01             	cmp    eax,0x1
100e7cea:	74 0f                	je     0x100e7cfb
100e7cec:	6a 0a                	push   0xa
100e7cee:	6a f6                	push   0xfffffff6
100e7cf0:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100e7cf6:	83 c4 08             	add    esp,0x8
100e7cf9:	eb 3b                	jmp    0x100e7d36
100e7cfb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e7cfe:	83 ec 10             	sub    esp,0x10
100e7d01:	83 c0 08             	add    eax,0x8
100e7d04:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x40000000
100e7d0b:	40 
100e7d0c:	c7 44 24 08 9a 99 19 	mov    DWORD PTR [esp+0x8],0x3e19999a
100e7d13:	3e 
100e7d14:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x3e800000
100e7d1b:	3e 
100e7d1c:	c7 04 24 00 00 00 40 	mov    DWORD PTR [esp],0x40000000
100e7d23:	50                   	push   eax
100e7d24:	e8 b7 20 03 00       	call   0x10119de0
100e7d29:	6a 0a                	push   0xa
100e7d2b:	6a f6                	push   0xfffffff6
100e7d2d:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100e7d33:	83 c4 1c             	add    esp,0x1c
100e7d36:	83 c0 64             	add    eax,0x64
100e7d39:	50                   	push   eax
100e7d3a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e7d3d:	6a 00                	push   0x0
100e7d3f:	83 ec 08             	sub    esp,0x8
100e7d42:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e7d49:	3f 
100e7d4a:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e7d51:	68 98 89 1a 10       	push   0x101a8998
100e7d56:	6a 01                	push   0x1
100e7d58:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e7d5e:	e8 8d 4c 01 00       	call   0x100fc9f0
100e7d63:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e7d66:	83 c4 0c             	add    esp,0xc
100e7d69:	83 c0 08             	add    eax,0x8
100e7d6c:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x40000000
100e7d73:	40 
100e7d74:	c7 44 24 08 cd cc cc 	mov    DWORD PTR [esp+0x8],0x3dcccccd
100e7d7b:	3d 
100e7d7c:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x3e800000
100e7d83:	3e 
100e7d84:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e7d8b:	50                   	push   eax
100e7d8c:	e8 4f 20 03 00       	call   0x10119de0
100e7d91:	83 c4 14             	add    esp,0x14
100e7d94:	5f                   	pop    edi
100e7d95:	5e                   	pop    esi
100e7d96:	8b e5                	mov    esp,ebp
100e7d98:	5d                   	pop    ebp
100e7d99:	c3                   	ret
