
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

10038df0 <.text+0x37df0>:
10038df0:	53                   	push   ebx
10038df1:	56                   	push   esi
10038df2:	57                   	push   edi
10038df3:	8b f9                	mov    edi,ecx
10038df5:	6a 00                	push   0x0
10038df7:	68 80 00 00 00       	push   0x80
10038dfc:	68 ff 00 00 00       	push   0xff
10038e01:	c6 87 74 03 00 00 00 	mov    BYTE PTR [edi+0x374],0x0
10038e08:	c7 05 d8 2b 1b 10 00 	mov    DWORD PTR ds:0x101b2bd8,0x0
10038e0f:	00 00 00 
10038e12:	c6 05 dc a0 18 10 00 	mov    BYTE PTR ds:0x1018a0dc,0x0
10038e19:	c6 05 dc a1 18 10 00 	mov    BYTE PTR ds:0x1018a1dc,0x0
10038e20:	c6 05 dc a2 18 10 00 	mov    BYTE PTR ds:0x1018a2dc,0x0
10038e27:	8b 8f a4 03 00 00    	mov    ecx,DWORD PTR [edi+0x3a4]
10038e2d:	68 80 00 00 00       	push   0x80
10038e32:	8b 01                	mov    eax,DWORD PTR [ecx]
10038e34:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
10038e3a:	80 bf f0 03 00 00 00 	cmp    BYTE PTR [edi+0x3f0],0x0
10038e41:	75 15                	jne    0x10038e58
10038e43:	8b 8f a4 03 00 00    	mov    ecx,DWORD PTR [edi+0x3a4]
10038e49:	85 c9                	test   ecx,ecx
10038e4b:	74 51                	je     0x10038e9e
10038e4d:	8b 01                	mov    eax,DWORD PTR [ecx]
10038e4f:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
10038e52:	ff d0                	call   eax
10038e54:	84 c0                	test   al,al
10038e56:	74 46                	je     0x10038e9e
10038e58:	8b 8f a4 03 00 00    	mov    ecx,DWORD PTR [edi+0x3a4]
10038e5e:	85 c9                	test   ecx,ecx
10038e60:	74 3c                	je     0x10038e9e
10038e62:	c6 87 f0 03 00 00 00 	mov    BYTE PTR [edi+0x3f0],0x0
10038e69:	8b 01                	mov    eax,DWORD PTR [ecx]
10038e6b:	6a 00                	push   0x0
10038e6d:	ff 50 24             	call   DWORD PTR [eax+0x24]
10038e70:	8d b7 ec 02 00 00    	lea    esi,[edi+0x2ec]
10038e76:	bb 20 00 00 00       	mov    ebx,0x20
10038e7b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
10038e80:	8b 0e                	mov    ecx,DWORD PTR [esi]
10038e82:	8b 01                	mov    eax,DWORD PTR [ecx]
10038e84:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
10038e87:	ff d0                	call   eax
10038e89:	84 c0                	test   al,al
10038e8b:	74 09                	je     0x10038e96
10038e8d:	8b 0e                	mov    ecx,DWORD PTR [esi]
10038e8f:	6a 00                	push   0x0
10038e91:	8b 01                	mov    eax,DWORD PTR [ecx]
10038e93:	ff 50 24             	call   DWORD PTR [eax+0x24]
10038e96:	83 c6 04             	add    esi,0x4
10038e99:	83 eb 01             	sub    ebx,0x1
10038e9c:	75 e2                	jne    0x10038e80
10038e9e:	8b 8f 64 0e 00 00    	mov    ecx,DWORD PTR [edi+0xe64]
10038ea4:	c7 87 70 03 00 00 00 	mov    DWORD PTR [edi+0x370],0x0
10038eab:	00 00 00 
10038eae:	c7 87 f8 03 00 00 00 	mov    DWORD PTR [edi+0x3f8],0x0
10038eb5:	00 00 00 
10038eb8:	c7 87 fc 03 00 00 00 	mov    DWORD PTR [edi+0x3fc],0x0
10038ebf:	00 00 00 
10038ec2:	c7 87 00 04 00 00 00 	mov    DWORD PTR [edi+0x400],0x0
10038ec9:	00 00 00 
10038ecc:	c7 87 70 0e 00 00 ff 	mov    DWORD PTR [edi+0xe70],0xff
10038ed3:	00 00 00 
10038ed6:	c6 87 6c 0e 00 00 00 	mov    BYTE PTR [edi+0xe6c],0x0
10038edd:	8b 01                	mov    eax,DWORD PTR [ecx]
10038edf:	6a 00                	push   0x0
10038ee1:	ff 50 24             	call   DWORD PTR [eax+0x24]
10038ee4:	8b 8f e8 03 00 00    	mov    ecx,DWORD PTR [edi+0x3e8]
10038eea:	6a 00                	push   0x0
10038eec:	8b 01                	mov    eax,DWORD PTR [ecx]
10038eee:	ff 50 24             	call   DWORD PTR [eax+0x24]
10038ef1:	c6 87 9c 03 00 00 00 	mov    BYTE PTR [edi+0x39c],0x0
10038ef8:	33 f6                	xor    esi,esi
10038efa:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
10038f00:	c7 04 b5 70 d8 18 10 	mov    DWORD PTR [esi*4+0x1018d870],0x0
10038f07:	00 00 00 00 
10038f0b:	c6 86 74 d9 18 10 00 	mov    BYTE PTR [esi+0x1018d974],0x0
10038f12:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
10038f18:	d9 1c b5 6c d7 18 10 	fstp   DWORD PTR [esi*4+0x1018d76c]
10038f1f:	46                   	inc    esi
10038f20:	83 fe 40             	cmp    esi,0x40
10038f23:	7e db                	jle    0x10038f00
10038f25:	33 f6                	xor    esi,esi
10038f27:	8d 9f 98 0f 00 00    	lea    ebx,[edi+0xf98]
10038f2d:	0f 1f 00             	nop    DWORD PTR [eax]
10038f30:	c6 84 37 9d 03 00 00 	mov    BYTE PTR [edi+esi*1+0x39d],0x0
10038f37:	00 
10038f38:	8b 4b e0             	mov    ecx,DWORD PTR [ebx-0x20]
10038f3b:	6a 00                	push   0x0
10038f3d:	8b 01                	mov    eax,DWORD PTR [ecx]
10038f3f:	ff 50 24             	call   DWORD PTR [eax+0x24]
10038f42:	8b 0b                	mov    ecx,DWORD PTR [ebx]
10038f44:	6a 00                	push   0x0
10038f46:	8b 01                	mov    eax,DWORD PTR [ecx]
10038f48:	ff 50 24             	call   DWORD PTR [eax+0x24]
10038f4b:	46                   	inc    esi
10038f4c:	8d 5b 04             	lea    ebx,[ebx+0x4]
10038f4f:	83 fe 04             	cmp    esi,0x4
10038f52:	7c dc                	jl     0x10038f30
10038f54:	8b 87 cc 03 00 00    	mov    eax,DWORD PTR [edi+0x3cc]
10038f5a:	68 08 b1 13 10       	push   0x1013b108
10038f5f:	50                   	push   eax
10038f60:	8b 08                	mov    ecx,DWORD PTR [eax]
10038f62:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
10038f68:	8b 8f cc 03 00 00    	mov    ecx,DWORD PTR [edi+0x3cc]
10038f6e:	83 c4 08             	add    esp,0x8
10038f71:	8b 01                	mov    eax,DWORD PTR [ecx]
10038f73:	6a 00                	push   0x0
10038f75:	ff 50 24             	call   DWORD PTR [eax+0x24]
10038f78:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
10038f7e:	d9 9f e4 03 00 00    	fstp   DWORD PTR [edi+0x3e4]
10038f84:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
10038f8a:	d9 9f 6c 03 00 00    	fstp   DWORD PTR [edi+0x36c]
10038f90:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
10038f96:	8b 87 e0 03 00 00    	mov    eax,DWORD PTR [edi+0x3e0]
10038f9c:	d9 9f f4 03 00 00    	fstp   DWORD PTR [edi+0x3f4]
10038fa2:	68 08 b1 13 10       	push   0x1013b108
10038fa7:	50                   	push   eax
10038fa8:	8b 08                	mov    ecx,DWORD PTR [eax]
10038faa:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
10038fb0:	8b 07                	mov    eax,DWORD PTR [edi]
10038fb2:	83 c4 08             	add    esp,0x8
10038fb5:	8b cf                	mov    ecx,edi
10038fb7:	c7 87 ec 03 00 00 ff 	mov    DWORD PTR [edi+0x3ec],0xff
10038fbe:	00 00 00 
10038fc1:	c6 87 5c 0f 00 00 00 	mov    BYTE PTR [edi+0xf5c],0x0
10038fc8:	c7 87 64 0f 00 00 00 	mov    DWORD PTR [edi+0xf64],0x0
10038fcf:	00 00 00 
10038fd2:	6a 01                	push   0x1
10038fd4:	ff 50 24             	call   DWORD PTR [eax+0x24]
10038fd7:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
10038fdd:	8b b7 18 10 00 00    	mov    esi,DWORD PTR [edi+0x1018]
10038fe3:	83 ec 0c             	sub    esp,0xc
10038fe6:	8b cc                	mov    ecx,esp
10038fe8:	c7 87 fc 0f 00 00 ff 	mov    DWORD PTR [edi+0xffc],0xff
10038fef:	00 00 00 
10038ff2:	d9 9f f8 0f 00 00    	fstp   DWORD PTR [edi+0xff8]
10038ff8:	68 ff 00 00 00       	push   0xff
10038ffd:	68 ff 00 00 00       	push   0xff
10039002:	68 ff 00 00 00       	push   0xff
10039007:	68 ff 00 00 00       	push   0xff
1003900c:	e8 7f a8 07 00       	call   0x100b3890
10039011:	8b 06                	mov    eax,DWORD PTR [esi]
10039013:	8b ce                	mov    ecx,esi
10039015:	ff 50 0c             	call   DWORD PTR [eax+0xc]
10039018:	6a 00                	push   0x0
1003901a:	8b cf                	mov    ecx,edi
1003901c:	e8 af 2b 00 00       	call   0x1003bbd0
10039021:	8b 8f d4 0f 00 00    	mov    ecx,DWORD PTR [edi+0xfd4]
10039027:	6a 00                	push   0x0
10039029:	8b 01                	mov    eax,DWORD PTR [ecx]
1003902b:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003902e:	c6 87 f4 0f 00 00 00 	mov    BYTE PTR [edi+0xff4],0x0
10039035:	c7 87 bc 00 00 00 05 	mov    DWORD PTR [edi+0xbc],0x5
1003903c:	00 00 00 
1003903f:	c7 87 40 0f 00 00 05 	mov    DWORD PTR [edi+0xf40],0x5
10039046:	00 00 00 
10039049:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003904f:	d9 9f e4 0f 00 00    	fstp   DWORD PTR [edi+0xfe4]
10039055:	c6 87 04 04 00 00 00 	mov    BYTE PTR [edi+0x404],0x0
1003905c:	8d b7 b4 03 00 00    	lea    esi,[edi+0x3b4]
10039062:	c6 87 04 05 00 00 00 	mov    BYTE PTR [edi+0x504],0x0
10039069:	bb 05 00 00 00       	mov    ebx,0x5
1003906e:	c6 87 04 06 00 00 00 	mov    BYTE PTR [edi+0x604],0x0
10039075:	c6 87 04 07 00 00 00 	mov    BYTE PTR [edi+0x704],0x0
1003907c:	c7 87 58 0f 00 00 ff 	mov    DWORD PTR [edi+0xf58],0xff
10039083:	00 00 00 
10039086:	66 c7 87 d4 01 00 00 	mov    WORD PTR [edi+0x1d4],0x0
1003908d:	00 00 
1003908f:	c7 87 44 0f 00 00 00 	mov    DWORD PTR [edi+0xf44],0xbf800000
10039096:	00 80 bf 
10039099:	c7 87 48 0f 00 00 00 	mov    DWORD PTR [edi+0xf48],0xbf800000
100390a0:	00 80 bf 
100390a3:	c7 87 4c 0f 00 00 00 	mov    DWORD PTR [edi+0xf4c],0xbf800000
100390aa:	00 80 bf 
100390ad:	c7 87 50 0f 00 00 00 	mov    DWORD PTR [edi+0xf50],0xbf800000
100390b4:	00 80 bf 
100390b7:	c7 87 60 0f 00 00 00 	mov    DWORD PTR [edi+0xf60],0x0
100390be:	00 00 00 
100390c1:	c7 87 bc 00 00 00 00 	mov    DWORD PTR [edi+0xbc],0x0
100390c8:	00 00 00 
100390cb:	c7 87 c0 00 00 00 00 	mov    DWORD PTR [edi+0xc0],0x0
100390d2:	00 00 00 
100390d5:	c7 87 c4 00 00 00 00 	mov    DWORD PTR [edi+0xc4],0x0
100390dc:	00 00 00 
100390df:	c7 87 c8 00 00 00 00 	mov    DWORD PTR [edi+0xc8],0x0
100390e6:	00 00 00 
100390e9:	c7 87 cc 00 00 00 00 	mov    DWORD PTR [edi+0xcc],0x0
100390f0:	00 00 00 
100390f3:	c7 87 d0 00 00 00 00 	mov    DWORD PTR [edi+0xd0],0x0
100390fa:	00 00 00 
100390fd:	c6 87 d4 00 00 00 00 	mov    BYTE PTR [edi+0xd4],0x0
10039104:	c7 87 c0 0f 00 00 00 	mov    DWORD PTR [edi+0xfc0],0x0
1003910b:	00 00 00 
1003910e:	c7 87 c4 0f 00 00 00 	mov    DWORD PTR [edi+0xfc4],0x0
10039115:	00 00 00 
10039118:	c7 87 bc 0f 00 00 00 	mov    DWORD PTR [edi+0xfbc],0x0
1003911f:	00 00 00 
10039122:	8b 06                	mov    eax,DWORD PTR [esi]
10039124:	68 08 b1 13 10       	push   0x1013b108
10039129:	50                   	push   eax
1003912a:	8b 08                	mov    ecx,DWORD PTR [eax]
1003912c:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
10039132:	83 c4 08             	add    esp,0x8
10039135:	8d 76 04             	lea    esi,[esi+0x4]
10039138:	83 eb 01             	sub    ebx,0x1
1003913b:	75 e5                	jne    0x10039122
1003913d:	8b 87 ac 03 00 00    	mov    eax,DWORD PTR [edi+0x3ac]
10039143:	68 08 b1 13 10       	push   0x1013b108
10039148:	50                   	push   eax
10039149:	8b 08                	mov    ecx,DWORD PTR [eax]
1003914b:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
10039151:	8b 87 a8 03 00 00    	mov    eax,DWORD PTR [edi+0x3a8]
10039157:	68 08 b1 13 10       	push   0x1013b108
1003915c:	50                   	push   eax
1003915d:	8b 08                	mov    ecx,DWORD PTR [eax]
1003915f:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
10039165:	8b 87 b0 03 00 00    	mov    eax,DWORD PTR [edi+0x3b0]
1003916b:	68 08 b1 13 10       	push   0x1013b108
10039170:	50                   	push   eax
10039171:	8b 08                	mov    ecx,DWORD PTR [eax]
10039173:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
10039179:	8b 8f 04 10 00 00    	mov    ecx,DWORD PTR [edi+0x1004]
1003917f:	83 c4 18             	add    esp,0x18
10039182:	88 9f 48 08 00 00    	mov    BYTE PTR [edi+0x848],bl
10039188:	c7 87 4c 08 00 00 ff 	mov    DWORD PTR [edi+0x84c],0xff
1003918f:	00 00 00 
10039192:	88 9f 98 0e 00 00    	mov    BYTE PTR [edi+0xe98],bl
10039198:	89 9f 18 0f 00 00    	mov    DWORD PTR [edi+0xf18],ebx
1003919e:	66 89 9f 1c 0f 00 00 	mov    WORD PTR [edi+0xf1c],bx
100391a5:	89 9f 20 0f 00 00    	mov    DWORD PTR [edi+0xf20],ebx
100391ab:	89 9f 24 0f 00 00    	mov    DWORD PTR [edi+0xf24],ebx
100391b1:	89 9f 28 0f 00 00    	mov    DWORD PTR [edi+0xf28],ebx
100391b7:	89 9f 40 0f 00 00    	mov    DWORD PTR [edi+0xf40],ebx
100391bd:	89 9f 2c 0f 00 00    	mov    DWORD PTR [edi+0xf2c],ebx
100391c3:	88 9f 30 0f 00 00    	mov    BYTE PTR [edi+0xf30],bl
100391c9:	88 9f 1e 0f 00 00    	mov    BYTE PTR [edi+0xf1e],bl
100391cf:	89 9f 34 0f 00 00    	mov    DWORD PTR [edi+0xf34],ebx
100391d5:	89 9f 38 0f 00 00    	mov    DWORD PTR [edi+0xf38],ebx
100391db:	89 9f 3c 0f 00 00    	mov    DWORD PTR [edi+0xf3c],ebx
100391e1:	8b 01                	mov    eax,DWORD PTR [ecx]
100391e3:	53                   	push   ebx
100391e4:	ff 50 24             	call   DWORD PTR [eax+0x24]
100391e7:	88 9f 08 10 00 00    	mov    BYTE PTR [edi+0x1008],bl
100391ed:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
100391f3:	d9 9f 0c 10 00 00    	fstp   DWORD PTR [edi+0x100c]
100391f9:	c7 87 14 10 00 00 60 	mov    DWORD PTR [edi+0x1014],0xffffff60
10039200:	ff ff ff 
10039203:	5f                   	pop    edi
10039204:	5e                   	pop    esi
10039205:	5b                   	pop    ebx
10039206:	c3                   	ret
