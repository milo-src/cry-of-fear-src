
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10052f20 <.text+0x51f20>:
10052f20:	56                   	push   esi
10052f21:	6a 64                	push   0x64
10052f23:	6a 00                	push   0x0
10052f25:	83 ec 08             	sub    esp,0x8
10052f28:	8b f1                	mov    esi,ecx
10052f2a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10052f2d:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10052f34:	3f 
10052f35:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10052f3c:	68 88 08 1b 10       	push   0x101b0888
10052f41:	6a 02                	push   0x2
10052f43:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10052f49:	e8 a2 9a 0a 00       	call   0x100fc9f0
10052f4e:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10052f54:	83 c4 1c             	add    esp,0x1c
10052f57:	8b 16                	mov    edx,DWORD PTR [esi]
10052f59:	8b ce                	mov    ecx,esi
10052f5b:	83 b8 98 1e 00 00 00 	cmp    DWORD PTR [eax+0x1e98],0x0
10052f62:	6a 00                	push   0x0
10052f64:	6a 01                	push   0x1
10052f66:	74 04                	je     0x10052f6c
10052f68:	6a 07                	push   0x7
10052f6a:	eb 02                	jmp    0x10052f6e
10052f6c:	6a 02                	push   0x2
10052f6e:	ff 92 98 01 00 00    	call   DWORD PTR [edx+0x198]
10052f74:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10052f79:	8b ce                	mov    ecx,esi
10052f7b:	6a 00                	push   0x0
10052f7d:	6a 01                	push   0x1
10052f7f:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10052f83:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10052f89:	0f 5a c0             	cvtps2pd xmm0,xmm0
10052f8c:	f2 0f 58 05 48 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e48
10052f93:	10 
10052f94:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10052f98:	f3 0f 11 80 08 03 00 	movss  DWORD PTR [eax+0x308],xmm0
10052f9f:	00 
10052fa0:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10052fa6:	c6 86 f9 01 00 00 00 	mov    BYTE PTR [esi+0x1f9],0x0
10052fad:	c7 80 14 1f 00 00 00 	mov    DWORD PTR [eax+0x1f14],0x0
10052fb4:	00 00 00 
10052fb7:	e8 84 bb fb ff       	call   0x1000eb40
10052fbc:	6a 00                	push   0x0
10052fbe:	6a 02                	push   0x2
10052fc0:	8b ce                	mov    ecx,esi
10052fc2:	e8 79 bb fb ff       	call   0x1000eb40
10052fc7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10052fca:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10052fd0:	8b 80 14 01 00 00    	mov    eax,DWORD PTR [eax+0x114]
10052fd6:	89 81 cc 05 00 00    	mov    DWORD PTR [ecx+0x5cc],eax
10052fdc:	8b ce                	mov    ecx,esi
10052fde:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10052fe1:	8b 16                	mov    edx,DWORD PTR [esi]
10052fe3:	ff b0 14 01 00 00    	push   DWORD PTR [eax+0x114]
10052fe9:	ff b6 60 01 00 00    	push   DWORD PTR [esi+0x160]
10052fef:	ff 92 9c 01 00 00    	call   DWORD PTR [edx+0x19c]
10052ff5:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10052ffb:	c6 80 1c 1f 00 00 00 	mov    BYTE PTR [eax+0x1f1c],0x0
10053002:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10053007:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
1005300d:	8b 00                	mov    eax,DWORD PTR [eax]
1005300f:	89 81 20 1f 00 00    	mov    DWORD PTR [ecx+0x1f20],eax
10053015:	c6 86 f8 01 00 00 00 	mov    BYTE PTR [esi+0x1f8],0x0
1005301c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10053021:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10053025:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1005302b:	0f 5a c0             	cvtps2pd xmm0,xmm0
1005302e:	f2 0f 58 05 48 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e48
10053035:	10 
10053036:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1005303a:	f3 0f 11 80 08 03 00 	movss  DWORD PTR [eax+0x308],xmm0
10053041:	00 
10053042:	f3 0f 11 86 d4 01 00 	movss  DWORD PTR [esi+0x1d4],xmm0
10053049:	00 
1005304a:	f3 0f 11 86 d0 01 00 	movss  DWORD PTR [esi+0x1d0],xmm0
10053051:	00 
10053052:	f3 0f 11 86 cc 01 00 	movss  DWORD PTR [esi+0x1cc],xmm0
10053059:	00 
1005305a:	5e                   	pop    esi
1005305b:	c3                   	ret
