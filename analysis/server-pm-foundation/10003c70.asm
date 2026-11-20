
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10003c70 <.text+0x2c70>:
10003c70:	55                   	push   ebp
10003c71:	8b ec                	mov    ebp,esp
10003c73:	83 ec 54             	sub    esp,0x54
10003c76:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10003c7b:	33 c5                	xor    eax,ebp
10003c7d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10003c80:	56                   	push   esi
10003c81:	e8 0a 0d 00 00       	call   0x10004990
10003c86:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10003c8b:	f3 0f 10 40 38       	movss  xmm0,DWORD PTR [eax+0x38]
10003c90:	8d 48 38             	lea    ecx,[eax+0x38]
10003c93:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
10003c98:	f3 0f 10 40 3c       	movss  xmm0,DWORD PTR [eax+0x3c]
10003c9d:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
10003ca2:	f3 0f 10 40 40       	movss  xmm0,DWORD PTR [eax+0x40]
10003ca7:	f3 0f 5c 05 80 13 1a 	subss  xmm0,DWORD PTR ds:0x101a1380
10003cae:	10 
10003caf:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10003cb4:	f3 0f 10 40 64       	movss  xmm0,DWORD PTR [eax+0x64]
10003cb9:	0f 2f 05 c4 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a13c4
10003cc0:	76 19                	jbe    0x10003cdb
10003cc2:	c7 80 e0 00 00 00 ff 	mov    DWORD PTR [eax+0xe0],0xffffffff
10003cc9:	ff ff ff 
10003ccc:	5e                   	pop    esi
10003ccd:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10003cd0:	33 cd                	xor    ecx,ebp
10003cd2:	e8 dc 9e 13 00       	call   0x1013dbb3
10003cd7:	8b e5                	mov    esp,ebp
10003cd9:	5d                   	pop    ebp
10003cda:	c3                   	ret
10003cdb:	8b 80 84 f5 04 00    	mov    eax,DWORD PTR [eax+0x4f584]
10003ce1:	8d 55 f0             	lea    edx,[ebp-0x10]
10003ce4:	6a ff                	push   0xffffffff
10003ce6:	6a 00                	push   0x0
10003ce8:	52                   	push   edx
10003ce9:	51                   	push   ecx
10003cea:	8d 4d ac             	lea    ecx,[ebp-0x54]
10003ced:	51                   	push   ecx
10003cee:	ff d0                	call   eax
10003cf0:	0f 57 c9             	xorps  xmm1,xmm1
10003cf3:	83 c4 14             	add    esp,0x14
10003cf6:	0f 10 60 20          	movups xmm4,XMMWORD PTR [eax+0x20]
10003cfa:	8b 70 40             	mov    esi,DWORD PTR [eax+0x40]
10003cfd:	0f 10 68 30          	movups xmm5,XMMWORD PTR [eax+0x30]
10003d01:	0f 10 18             	movups xmm3,XMMWORD PTR [eax]
10003d04:	0f 10 50 10          	movups xmm2,XMMWORD PTR [eax+0x10]
10003d08:	83 c8 ff             	or     eax,0xffffffff
10003d0b:	0f 28 c4             	movaps xmm0,xmm4
10003d0e:	66 0f 7e ea          	movd   edx,xmm5
10003d12:	0f c6 c4 aa          	shufps xmm0,xmm4,0xaa
10003d16:	f3 0f 5a c8          	cvtss2sd xmm1,xmm0
10003d1a:	8b ca                	mov    ecx,edx
10003d1c:	f2 0f 10 05 58 1e 1a 	movsd  xmm0,QWORD PTR ds:0x101a1e58
10003d23:	10 
10003d24:	66 0f 2f c1          	comisd xmm0,xmm1
10003d28:	0f 47 c8             	cmova  ecx,eax
10003d2b:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10003d30:	89 88 e0 00 00 00    	mov    DWORD PTR [eax+0xe0],ecx
10003d36:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10003d3c:	83 b9 e0 00 00 00 ff 	cmp    DWORD PTR [ecx+0xe0],0xffffffff
10003d43:	74 65                	je     0x10003daa
10003d45:	c7 81 cc 00 00 00 00 	mov    DWORD PTR [ecx+0xcc],0x0
10003d4c:	00 00 00 
10003d4f:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10003d55:	83 b9 e4 00 00 00 02 	cmp    DWORD PTR [ecx+0xe4],0x2
10003d5c:	7d 4c                	jge    0x10003daa
10003d5e:	0f 28 c3             	movaps xmm0,xmm3
10003d61:	66 0f 73 d8 04       	psrldq xmm0,0x4
10003d66:	66 0f 7e c0          	movd   eax,xmm0
10003d6a:	85 c0                	test   eax,eax
10003d6c:	75 3c                	jne    0x10003daa
10003d6e:	66 0f 7e d8          	movd   eax,xmm3
10003d72:	85 c0                	test   eax,eax
10003d74:	75 34                	jne    0x10003daa
10003d76:	0f 28 c2             	movaps xmm0,xmm2
10003d79:	0f c6 c2 55          	shufps xmm0,xmm2,0x55
10003d7d:	f3 0f 11 41 38       	movss  DWORD PTR [ecx+0x38],xmm0
10003d82:	0f 28 c2             	movaps xmm0,xmm2
10003d85:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10003d8a:	0f c6 c2 aa          	shufps xmm0,xmm2,0xaa
10003d8e:	f3 0f 11 40 3c       	movss  DWORD PTR [eax+0x3c],xmm0
10003d93:	0f 28 c2             	movaps xmm0,xmm2
10003d96:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10003d9b:	0f c6 c2 ff          	shufps xmm0,xmm2,0xff
10003d9f:	f3 0f 11 40 40       	movss  DWORD PTR [eax+0x40],xmm0
10003da4:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10003daa:	85 d2                	test   edx,edx
10003dac:	7e 23                	jle    0x10003dd1
10003dae:	8d 41 5c             	lea    eax,[ecx+0x5c]
10003db1:	50                   	push   eax
10003db2:	83 ec 44             	sub    esp,0x44
10003db5:	8b c4                	mov    eax,esp
10003db7:	0f 11 18             	movups XMMWORD PTR [eax],xmm3
10003dba:	0f 11 50 10          	movups XMMWORD PTR [eax+0x10],xmm2
10003dbe:	0f 11 60 20          	movups XMMWORD PTR [eax+0x20],xmm4
10003dc2:	0f 11 68 30          	movups XMMWORD PTR [eax+0x30],xmm5
10003dc6:	89 70 40             	mov    DWORD PTR [eax+0x40],esi
10003dc9:	e8 72 fa ff ff       	call   0x10003840
10003dce:	83 c4 48             	add    esp,0x48
10003dd1:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10003dd4:	33 cd                	xor    ecx,ebp
10003dd6:	5e                   	pop    esi
10003dd7:	e8 d7 9d 13 00       	call   0x1013dbb3
10003ddc:	8b e5                	mov    esp,ebp
10003dde:	5d                   	pop    ebp
10003ddf:	c3                   	ret
