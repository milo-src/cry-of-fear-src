
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000bc60 <.text+0xac60>:
1000bc60:	55                   	push   ebp
1000bc61:	8b ec                	mov    ebp,esp
1000bc63:	83 e4 f8             	and    esp,0xfffffff8
1000bc66:	83 ec 1c             	sub    esp,0x1c
1000bc69:	53                   	push   ebx
1000bc6a:	56                   	push   esi
1000bc6b:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1000bc6e:	57                   	push   edi
1000bc6f:	8b f9                	mov    edi,ecx
1000bc71:	8b 06                	mov    eax,DWORD PTR [esi]
1000bc73:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1000bc77:	8d 48 ff             	lea    ecx,[eax-0x1]
1000bc7a:	83 f9 5b             	cmp    ecx,0x5b
1000bc7d:	0f 87 fc 13 00 00    	ja     0x1000d07f
1000bc83:	ff 24 8d 9c d0 00 10 	jmp    DWORD PTR [ecx*4+0x1000d09c]
1000bc8a:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000bc8d:	51                   	push   ecx
1000bc8e:	f3 0f 10 40 54       	movss  xmm0,DWORD PTR [eax+0x54]
1000bc93:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1000bc98:	e8 83 b7 10 00       	call   0x10117420
1000bc9d:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1000bca1:	f3 0f 10 44 24 10    	movss  xmm0,DWORD PTR [esp+0x10]
1000bca7:	f3 0f 5c 46 04       	subss  xmm0,DWORD PTR [esi+0x4]
1000bcac:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1000bcb1:	e8 6a b7 10 00       	call   0x10117420
1000bcb6:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000bcb9:	83 c4 04             	add    esp,0x4
1000bcbc:	d9 98 ac 00 00 00    	fstp   DWORD PTR [eax+0xac]
1000bcc2:	8b cf                	mov    ecx,edi
1000bcc4:	e8 27 ff ff ff       	call   0x1000bbf0
1000bcc9:	5f                   	pop    edi
1000bcca:	5e                   	pop    esi
1000bccb:	5b                   	pop    ebx
1000bccc:	8b e5                	mov    esp,ebp
1000bcce:	5d                   	pop    ebp
1000bccf:	c2 04 00             	ret    0x4
1000bcd2:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000bcd5:	51                   	push   ecx
1000bcd6:	f3 0f 10 40 54       	movss  xmm0,DWORD PTR [eax+0x54]
1000bcdb:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1000bce0:	e8 3b b7 10 00       	call   0x10117420
1000bce5:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
1000bcea:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1000bcee:	f3 0f 58 44 24 10    	addss  xmm0,DWORD PTR [esp+0x10]
1000bcf4:	eb b6                	jmp    0x1000bcac
1000bcf6:	f3 0f 2c 46 04       	cvttss2si eax,DWORD PTR [esi+0x4]
1000bcfb:	09 87 ec 02 00 00    	or     DWORD PTR [edi+0x2ec],eax
1000bd01:	f7 87 80 01 00 00 00 	test   DWORD PTR [edi+0x180],0x40000000
1000bd08:	00 00 40 
1000bd0b:	0f 85 7f 13 00 00    	jne    0x1000d090
1000bd11:	c7 87 2c 02 00 00 04 	mov    DWORD PTR [edi+0x22c],0x4
1000bd18:	00 00 00 
1000bd1b:	5f                   	pop    edi
1000bd1c:	5e                   	pop    esi
1000bd1d:	5b                   	pop    ebx
1000bd1e:	8b e5                	mov    esp,ebp
1000bd20:	5d                   	pop    ebp
1000bd21:	c2 04 00             	ret    0x4
1000bd24:	f3 0f 2c 46 04       	cvttss2si eax,DWORD PTR [esi+0x4]
1000bd29:	f7 d0                	not    eax
1000bd2b:	21 87 ec 02 00 00    	and    DWORD PTR [edi+0x2ec],eax
1000bd31:	eb ce                	jmp    0x1000bd01
1000bd33:	8b cf                	mov    ecx,edi
1000bd35:	e8 a6 2b 0b 00       	call   0x100be8e0
1000bd3a:	8b 8f 80 01 00 00    	mov    ecx,DWORD PTR [edi+0x180]
1000bd40:	89 87 e8 02 00 00    	mov    DWORD PTR [edi+0x2e8],eax
1000bd46:	83 f8 ff             	cmp    eax,0xffffffff
1000bd49:	74 08                	je     0x1000bd53
1000bd4b:	f7 c1 00 00 00 40    	test   ecx,0x40000000
1000bd51:	eb b8                	jmp    0x1000bd0b
1000bd53:	81 c9 00 00 00 40    	or     ecx,0x40000000
1000bd59:	89 8f 80 01 00 00    	mov    DWORD PTR [edi+0x180],ecx
1000bd5f:	5f                   	pop    edi
1000bd60:	5e                   	pop    esi
1000bd61:	5b                   	pop    ebx
1000bd62:	8b e5                	mov    esp,ebp
1000bd64:	5d                   	pop    ebp
1000bd65:	c2 04 00             	ret    0x4
1000bd68:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000bd6b:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
1000bd70:	66 0f d6 87 dc 02 00 	movq   QWORD PTR [edi+0x2dc],xmm0
1000bd77:	00 
1000bd78:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
1000bd7b:	89 87 e4 02 00 00    	mov    DWORD PTR [edi+0x2e4],eax
1000bd81:	e9 7b ff ff ff       	jmp    0x1000bd01
1000bd86:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
1000bd8d:	10 
1000bd8e:	66 0f d6 87 dc 02 00 	movq   QWORD PTR [edi+0x2dc],xmm0
1000bd95:	00 
1000bd96:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
1000bd9b:	89 87 e4 02 00 00    	mov    DWORD PTR [edi+0x2e4],eax
1000bda1:	e9 5b ff ff ff       	jmp    0x1000bd01
1000bda6:	c7 87 e8 02 00 00 ff 	mov    DWORD PTR [edi+0x2e8],0xffffffff
1000bdad:	ff ff ff 
1000bdb0:	e9 4c ff ff ff       	jmp    0x1000bd01
1000bdb5:	8b 87 18 02 00 00    	mov    eax,DWORD PTR [edi+0x218]
1000bdbb:	3b 87 d0 02 00 00    	cmp    eax,DWORD PTR [edi+0x2d0]
1000bdc1:	75 10                	jne    0x1000bdd3
1000bdc3:	8b 07                	mov    eax,DWORD PTR [edi]
1000bdc5:	8b cf                	mov    ecx,edi
1000bdc7:	ff 90 68 01 00 00    	call   DWORD PTR [eax+0x168]
1000bdcd:	89 87 18 02 00 00    	mov    DWORD PTR [edi+0x218],eax
1000bdd3:	8b cf                	mov    ecx,edi
1000bdd5:	e8 96 5c 0b 00       	call   0x100c1a70
1000bdda:	e9 22 ff ff ff       	jmp    0x1000bd01
1000bddf:	f3 0f 2c 46 04       	cvttss2si eax,DWORD PTR [esi+0x4]
1000bde4:	89 87 18 02 00 00    	mov    DWORD PTR [edi+0x218],eax
1000bdea:	5f                   	pop    edi
1000bdeb:	5e                   	pop    esi
1000bdec:	5b                   	pop    ebx
1000bded:	8b e5                	mov    esp,ebp
1000bdef:	5d                   	pop    ebp
1000bdf0:	c2 04 00             	ret    0x4
1000bdf3:	6b 8f e8 02 00 00 58 	imul   ecx,DWORD PTR [edi+0x2e8],0x58
1000bdfa:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
1000bdff:	0f bf 44 01 52       	movsx  eax,WORD PTR [ecx+eax*1+0x52]
1000be04:	89 87 18 02 00 00    	mov    DWORD PTR [edi+0x218],eax
1000be0a:	5f                   	pop    edi
1000be0b:	5e                   	pop    esi
1000be0c:	5b                   	pop    ebx
1000be0d:	8b e5                	mov    esp,ebp
1000be0f:	5d                   	pop    ebp
1000be10:	c2 04 00             	ret    0x4
1000be13:	f3 0f 2c 46 04       	cvttss2si eax,DWORD PTR [esi+0x4]
1000be18:	8b 17                	mov    edx,DWORD PTR [edi]
1000be1a:	8b cf                	mov    ecx,edi
1000be1c:	50                   	push   eax
1000be1d:	ff 92 8c 01 00 00    	call   DWORD PTR [edx+0x18c]
1000be23:	85 c0                	test   eax,eax
1000be25:	0f 84 f3 04 00 00    	je     0x1000c31e
1000be2b:	50                   	push   eax
1000be2c:	8b cf                	mov    ecx,edi
1000be2e:	e8 1d ec ff ff       	call   0x1000aa50
1000be33:	5f                   	pop    edi
1000be34:	5e                   	pop    esi
1000be35:	5b                   	pop    ebx
1000be36:	8b e5                	mov    esp,ebp
1000be38:	5d                   	pop    ebp
1000be39:	c2 04 00             	ret    0x4
1000be3c:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
1000be42:	e8 39 b9 00 00       	call   0x10017780
1000be47:	85 c0                	test   eax,eax
1000be49:	0f 84 cf 04 00 00    	je     0x1000c31e
1000be4f:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
1000be54:	83 ec 08             	sub    esp,0x8
1000be57:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
1000be5d:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1000be64:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
1000be6a:	e8 31 b9 00 00       	call   0x100177a0
1000be6f:	83 ec 0c             	sub    esp,0xc
1000be72:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
1000be78:	8b d4                	mov    edx,esp
1000be7a:	8b 70 04             	mov    esi,DWORD PTR [eax+0x4]
1000be7d:	8b 86 78 01 00 00    	mov    eax,DWORD PTR [esi+0x178]
1000be83:	89 02                	mov    DWORD PTR [edx],eax
1000be85:	8b 86 7c 01 00 00    	mov    eax,DWORD PTR [esi+0x17c]
1000be8b:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
1000be8e:	8b 86 80 01 00 00    	mov    eax,DWORD PTR [esi+0x180]
1000be94:	89 42 08             	mov    DWORD PTR [edx+0x8],eax
1000be97:	e8 04 b9 00 00       	call   0x100177a0
1000be9c:	83 ec 0c             	sub    esp,0xc
1000be9f:	8b cc                	mov    ecx,esp
1000bea1:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1000bea4:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
1000bea7:	89 01                	mov    DWORD PTR [ecx],eax
1000bea9:	8b 42 0c             	mov    eax,DWORD PTR [edx+0xc]
1000beac:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000beaf:	8b 42 10             	mov    eax,DWORD PTR [edx+0x10]
1000beb2:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000beb5:	8b cf                	mov    ecx,edi
1000beb7:	8b 07                	mov    eax,DWORD PTR [edi]
1000beb9:	ff 90 c8 01 00 00    	call   DWORD PTR [eax+0x1c8]
1000bebf:	8b 8f 80 01 00 00    	mov    ecx,DWORD PTR [edi+0x180]
1000bec5:	85 c0                	test   eax,eax
1000bec7:	0f 84 86 fe ff ff    	je     0x1000bd53
1000becd:	f7 c1 00 00 00 40    	test   ecx,0x40000000
1000bed3:	e9 33 fe ff ff       	jmp    0x1000bd0b
1000bed8:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
1000bede:	e8 9d b8 00 00       	call   0x10017780
1000bee3:	85 c0                	test   eax,eax
1000bee5:	0f 84 33 04 00 00    	je     0x1000c31e
1000beeb:	8b 07                	mov    eax,DWORD PTR [edi]
1000beed:	8b cf                	mov    ecx,edi
1000beef:	8b 80 d0 01 00 00    	mov    eax,DWORD PTR [eax+0x1d0]
1000bef5:	ff d0                	call   eax
1000bef7:	83 ec 08             	sub    esp,0x8
1000befa:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1000befe:	f3 0f 10 44 24 14    	movss  xmm0,DWORD PTR [esp+0x14]
1000bf04:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
1000bf0a:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
1000bf0f:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1000bf14:	e9 4b ff ff ff       	jmp    0x1000be64
1000bf19:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
1000bf1f:	e8 5c b8 00 00       	call   0x10017780
1000bf24:	85 c0                	test   eax,eax
1000bf26:	0f 84 f2 03 00 00    	je     0x1000c31e
1000bf2c:	8b 07                	mov    eax,DWORD PTR [edi]
1000bf2e:	8b cf                	mov    ecx,edi
1000bf30:	8b 80 d0 01 00 00    	mov    eax,DWORD PTR [eax+0x1d0]
1000bf36:	ff d0                	call   eax
1000bf38:	d9 5c 24 0c          	fstp   DWORD PTR [esp+0xc]
1000bf3c:	f3 0f 10 44 24 0c    	movss  xmm0,DWORD PTR [esp+0xc]
1000bf42:	e9 0d ff ff ff       	jmp    0x1000be54
1000bf47:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
1000bf4d:	e8 2e b8 00 00       	call   0x10017780
1000bf52:	85 c0                	test   eax,eax
1000bf54:	75 05                	jne    0x1000bf5b
1000bf56:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000bf59:	eb 0e                	jmp    0x1000bf69
1000bf5b:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
1000bf61:	e8 3a b8 00 00       	call   0x100177a0
1000bf66:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1000bf69:	8d 98 78 01 00 00    	lea    ebx,[eax+0x178]
1000bf6f:	8b cf                	mov    ecx,edi
1000bf71:	83 c0 08             	add    eax,0x8
1000bf74:	53                   	push   ebx
1000bf75:	50                   	push   eax
1000bf76:	89 44 24 1c          	mov    DWORD PTR [esp+0x1c],eax
1000bf7a:	e8 e1 2a 0b 00       	call   0x100bea60
1000bf7f:	85 c0                	test   eax,eax
1000bf81:	75 64                	jne    0x1000bfe7
1000bf83:	8b 07                	mov    eax,DWORD PTR [edi]
1000bf85:	8b cf                	mov    ecx,edi
1000bf87:	8b 80 d0 01 00 00    	mov    eax,DWORD PTR [eax+0x1d0]
1000bf8d:	ff d0                	call   eax
1000bf8f:	8b 03                	mov    eax,DWORD PTR [ebx]
1000bf91:	83 ec 14             	sub    esp,0x14
1000bf94:	8b 54 24 28          	mov    edx,DWORD PTR [esp+0x28]
1000bf98:	8b cc                	mov    ecx,esp
1000bf9a:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
1000bf9e:	f3 0f 10 44 24 20    	movss  xmm0,DWORD PTR [esp+0x20]
1000bfa4:	f3 0f 11 44 24 10    	movss  DWORD PTR [esp+0x10],xmm0
1000bfaa:	89 01                	mov    DWORD PTR [ecx],eax
1000bfac:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1000bfaf:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000bfb2:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
1000bfb5:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000bfb8:	8b 02                	mov    eax,DWORD PTR [edx]
1000bfba:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
1000bfc1:	00 
1000bfc2:	83 ec 0c             	sub    esp,0xc
1000bfc5:	8b cc                	mov    ecx,esp
1000bfc7:	89 01                	mov    DWORD PTR [ecx],eax
1000bfc9:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
1000bfcc:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000bfcf:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
1000bfd2:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000bfd5:	8b cf                	mov    ecx,edi
1000bfd7:	8b 07                	mov    eax,DWORD PTR [edi]
1000bfd9:	ff 90 c8 01 00 00    	call   DWORD PTR [eax+0x1c8]
1000bfdf:	85 c0                	test   eax,eax
1000bfe1:	0f 84 37 03 00 00    	je     0x1000c31e
1000bfe7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000bfec:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
1000bff1:	f3 0f 58 00          	addss  xmm0,DWORD PTR [eax]
1000bff5:	f3 0f 11 87 10 02 00 	movss  DWORD PTR [edi+0x210],xmm0
1000bffc:	00 
1000bffd:	e9 ff fc ff ff       	jmp    0x1000bd01
1000c002:	8b 07                	mov    eax,DWORD PTR [edi]
1000c004:	8b cf                	mov    ecx,edi
1000c006:	8b 80 d0 01 00 00    	mov    eax,DWORD PTR [eax+0x1d0]
1000c00c:	ff d0                	call   eax
1000c00e:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
1000c011:	83 ec 14             	sub    esp,0x14
1000c014:	8b cc                	mov    ecx,esp
1000c016:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1000c01a:	f3 0f 10 44 24 28    	movss  xmm0,DWORD PTR [esp+0x28]
1000c020:	8b 82 78 01 00 00    	mov    eax,DWORD PTR [edx+0x178]
1000c026:	89 01                	mov    DWORD PTR [ecx],eax
1000c028:	8b 82 7c 01 00 00    	mov    eax,DWORD PTR [edx+0x17c]
1000c02e:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000c031:	8b 82 80 01 00 00    	mov    eax,DWORD PTR [edx+0x180]
1000c037:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000c03a:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
1000c03d:	f3 0f 11 44 24 10    	movss  DWORD PTR [esp+0x10],xmm0
1000c043:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
1000c04a:	00 
1000c04b:	83 ec 0c             	sub    esp,0xc
1000c04e:	8b cc                	mov    ecx,esp
1000c050:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
1000c053:	89 01                	mov    DWORD PTR [ecx],eax
1000c055:	8b 42 0c             	mov    eax,DWORD PTR [edx+0xc]
1000c058:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000c05b:	8b 42 10             	mov    eax,DWORD PTR [edx+0x10]
1000c05e:	e9 6f ff ff ff       	jmp    0x1000bfd2
1000c063:	8b 07                	mov    eax,DWORD PTR [edi]
1000c065:	8b cf                	mov    ecx,edi
1000c067:	ff 90 ec 01 00 00    	call   DWORD PTR [eax+0x1ec]
1000c06d:	8b d8                	mov    ebx,eax
1000c06f:	85 db                	test   ebx,ebx
1000c071:	0f 84 a7 02 00 00    	je     0x1000c31e
1000c077:	8b 17                	mov    edx,DWORD PTR [edi]
1000c079:	8b cf                	mov    ecx,edi
1000c07b:	8b 92 d0 01 00 00    	mov    edx,DWORD PTR [edx+0x1d0]
1000c081:	ff d2                	call   edx
1000c083:	83 ec 14             	sub    esp,0x14
1000c086:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
1000c08a:	f3 0f 10 44 24 28    	movss  xmm0,DWORD PTR [esp+0x28]
1000c090:	8b c4                	mov    eax,esp
1000c092:	f3 0f 11 44 24 10    	movss  DWORD PTR [esp+0x10],xmm0
1000c098:	66 0f 6e 43 10       	movd   xmm0,DWORD PTR [ebx+0x10]
1000c09d:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1000c0a0:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
1000c0a6:	83 ec 0c             	sub    esp,0xc
1000c0a9:	f3 0f 10 05 34 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f34
1000c0b0:	10 
1000c0b1:	8b cc                	mov    ecx,esp
1000c0b3:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1000c0b7:	f3 0f 10 05 38 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f38
1000c0be:	10 
1000c0bf:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
1000c0c4:	f3 0f 10 05 3c 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f3c
1000c0cb:	10 
1000c0cc:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
1000c0d1:	8b 03                	mov    eax,DWORD PTR [ebx]
1000c0d3:	89 01                	mov    DWORD PTR [ecx],eax
1000c0d5:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1000c0d8:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000c0db:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
1000c0de:	e9 ef fe ff ff       	jmp    0x1000bfd2
1000c0e3:	6b 8f e8 02 00 00 58 	imul   ecx,DWORD PTR [edi+0x2e8],0x58
1000c0ea:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
1000c0ef:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
1000c0f2:	8b 44 01 54          	mov    eax,DWORD PTR [ecx+eax*1+0x54]
1000c0f6:	8b cf                	mov    ecx,edi
1000c0f8:	89 82 ac 00 00 00    	mov    DWORD PTR [edx+0xac],eax
1000c0fe:	e8 ed fa ff ff       	call   0x1000bbf0
1000c103:	5f                   	pop    edi
1000c104:	5e                   	pop    esi
1000c105:	5b                   	pop    ebx
1000c106:	8b e5                	mov    esp,ebp
1000c108:	5d                   	pop    ebp
1000c109:	c2 04 00             	ret    0x4
1000c10c:	8b 87 dc 02 00 00    	mov    eax,DWORD PTR [edi+0x2dc]
1000c112:	83 ec 0c             	sub    esp,0xc
1000c115:	8b cc                	mov    ecx,esp
1000c117:	89 01                	mov    DWORD PTR [ecx],eax
1000c119:	8b 87 e0 02 00 00    	mov    eax,DWORD PTR [edi+0x2e0]
1000c11f:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000c122:	8b 87 e4 02 00 00    	mov    eax,DWORD PTR [edi+0x2e4]
1000c128:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000c12b:	8b cf                	mov    ecx,edi
1000c12d:	e8 be 3f 0b 00       	call   0x100c00f0
1000c132:	8b cf                	mov    ecx,edi
1000c134:	e8 b7 fa ff ff       	call   0x1000bbf0
1000c139:	5f                   	pop    edi
1000c13a:	5e                   	pop    esi
1000c13b:	5b                   	pop    ebx
1000c13c:	8b e5                	mov    esp,ebp
1000c13e:	5d                   	pop    ebp
1000c13f:	c2 04 00             	ret    0x4
1000c142:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
1000c148:	e8 33 b6 00 00       	call   0x10017780
1000c14d:	85 c0                	test   eax,eax
1000c14f:	0f 84 c9 01 00 00    	je     0x1000c31e
1000c155:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
1000c15b:	e8 40 b6 00 00       	call   0x100177a0
1000c160:	83 ec 0c             	sub    esp,0xc
1000c163:	8b cc                	mov    ecx,esp
1000c165:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1000c168:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
1000c16b:	89 01                	mov    DWORD PTR [ecx],eax
1000c16d:	8b 42 0c             	mov    eax,DWORD PTR [edx+0xc]
1000c170:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000c173:	8b 42 10             	mov    eax,DWORD PTR [edx+0x10]
1000c176:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000c179:	8b cf                	mov    ecx,edi
1000c17b:	e8 70 3f 0b 00       	call   0x100c00f0
1000c180:	8b cf                	mov    ecx,edi
1000c182:	e8 69 fa ff ff       	call   0x1000bbf0
1000c187:	5f                   	pop    edi
1000c188:	5e                   	pop    esi
1000c189:	5b                   	pop    ebx
1000c18a:	8b e5                	mov    esp,ebp
1000c18c:	5d                   	pop    ebp
1000c18d:	c2 04 00             	ret    0x4
1000c190:	8b 87 f4 02 00 00    	mov    eax,DWORD PTR [edi+0x2f4]
1000c196:	83 ec 0c             	sub    esp,0xc
1000c199:	8b cc                	mov    ecx,esp
1000c19b:	89 01                	mov    DWORD PTR [ecx],eax
1000c19d:	8b 87 f8 02 00 00    	mov    eax,DWORD PTR [edi+0x2f8]
1000c1a3:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000c1a6:	8b 87 fc 02 00 00    	mov    eax,DWORD PTR [edi+0x2fc]
1000c1ac:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000c1af:	8b cf                	mov    ecx,edi
1000c1b1:	e8 3a 3f 0b 00       	call   0x100c00f0
1000c1b6:	8b cf                	mov    ecx,edi
1000c1b8:	e8 33 fa ff ff       	call   0x1000bbf0
1000c1bd:	5f                   	pop    edi
1000c1be:	5e                   	pop    esi
1000c1bf:	5b                   	pop    ebx
1000c1c0:	8b e5                	mov    esp,ebp
1000c1c2:	5d                   	pop    ebp
1000c1c3:	c2 04 00             	ret    0x4
1000c1c6:	8b cf                	mov    ecx,edi
1000c1c8:	e8 63 1d 0b 00       	call   0x100bdf30
1000c1cd:	85 c0                	test   eax,eax
1000c1cf:	74 0a                	je     0x1000c1db
1000c1d1:	68 44 20 1a 10       	push   0x101a2044
1000c1d6:	e9 86 05 00 00       	jmp    0x1000c761
1000c1db:	8b 97 bc 02 00 00    	mov    edx,DWORD PTR [edi+0x2bc]
1000c1e1:	83 ec 0c             	sub    esp,0xc
1000c1e4:	03 d2                	add    edx,edx
1000c1e6:	8b cc                	mov    ecx,esp
1000c1e8:	8b 84 d7 38 02 00 00 	mov    eax,DWORD PTR [edi+edx*8+0x238]
1000c1ef:	89 01                	mov    DWORD PTR [ecx],eax
1000c1f1:	8b 84 d7 3c 02 00 00 	mov    eax,DWORD PTR [edi+edx*8+0x23c]
1000c1f8:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000c1fb:	8b 84 d7 40 02 00 00 	mov    eax,DWORD PTR [edi+edx*8+0x240]
1000c202:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000c205:	8b cf                	mov    ecx,edi
1000c207:	e8 e4 3e 0b 00       	call   0x100c00f0
1000c20c:	8b cf                	mov    ecx,edi
1000c20e:	e8 dd f9 ff ff       	call   0x1000bbf0
1000c213:	5f                   	pop    edi
1000c214:	5e                   	pop    esi
1000c215:	5b                   	pop    ebx
1000c216:	8b e5                	mov    esp,ebp
1000c218:	5d                   	pop    ebp
1000c219:	c2 04 00             	ret    0x4
1000c21c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000c221:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
1000c226:	f3 0f 58 00          	addss  xmm0,DWORD PTR [eax]
1000c22a:	f3 0f 11 87 0c 02 00 	movss  DWORD PTR [edi+0x20c],xmm0
1000c231:	00 
1000c232:	5f                   	pop    edi
1000c233:	5e                   	pop    esi
1000c234:	5b                   	pop    ebx
1000c235:	8b e5                	mov    esp,ebp
1000c237:	5d                   	pop    ebp
1000c238:	c2 04 00             	ret    0x4
1000c23b:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
1000c240:	83 ec 08             	sub    esp,0x8
1000c243:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
1000c249:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
1000c250:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
1000c256:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000c25b:	83 c4 08             	add    esp,0x8
1000c25e:	d8 00                	fadd   DWORD PTR [eax]
1000c260:	d9 9f 0c 02 00 00    	fstp   DWORD PTR [edi+0x20c]
1000c266:	5f                   	pop    edi
1000c267:	5e                   	pop    esi
1000c268:	5b                   	pop    ebx
1000c269:	8b e5                	mov    esp,ebp
1000c26b:	5d                   	pop    ebp
1000c26c:	c2 04 00             	ret    0x4
1000c26f:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
1000c272:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
1000c278:	e8 23 b5 00 00       	call   0x100177a0
1000c27d:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1000c280:	f3 0f 10 48 08       	movss  xmm1,DWORD PTR [eax+0x8]
1000c285:	f3 0f 10 50 0c       	movss  xmm2,DWORD PTR [eax+0xc]
1000c28a:	f3 0f 5c 56 0c       	subss  xmm2,DWORD PTR [esi+0xc]
1000c28f:	f3 0f 5c 4e 08       	subss  xmm1,DWORD PTR [esi+0x8]
1000c294:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
1000c299:	f3 0f 5c 46 10       	subss  xmm0,DWORD PTR [esi+0x10]
1000c29e:	f3 0f 59 d2          	mulss  xmm2,xmm2
1000c2a2:	f3 0f 59 c9          	mulss  xmm1,xmm1
1000c2a6:	f3 0f 59 c0          	mulss  xmm0,xmm0
1000c2aa:	f3 0f 58 d1          	addss  xmm2,xmm1
1000c2ae:	0f 57 c9             	xorps  xmm1,xmm1
1000c2b1:	f3 0f 58 d0          	addss  xmm2,xmm0
1000c2b5:	0f 5a c2             	cvtps2pd xmm0,xmm2
1000c2b8:	66 0f 2e c8          	ucomisd xmm1,xmm0
1000c2bc:	77 06                	ja     0x1000c2c4
1000c2be:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1000c2c2:	eb 05                	jmp    0x1000c2c9
1000c2c4:	e8 c7 fb 15 00       	call   0x1016be90
1000c2c9:	0f 57 c9             	xorps  xmm1,xmm1
1000c2cc:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
1000c2d0:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
1000c2d7:	10 
1000c2d8:	0f 2f c1             	comiss xmm0,xmm1
1000c2db:	0f 87 20 fa ff ff    	ja     0x1000bd01
1000c2e1:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
1000c2e7:	e8 b4 b4 00 00       	call   0x100177a0
1000c2ec:	51                   	push   ecx
1000c2ed:	c7 04 24 00 00 00 3f 	mov    DWORD PTR [esp],0x3f000000
1000c2f4:	8b cf                	mov    ecx,edi
1000c2f6:	6a 03                	push   0x3
1000c2f8:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1000c2fb:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
1000c300:	66 0f d6 87 c4 02 00 	movq   QWORD PTR [edi+0x2c4],xmm0
1000c307:	00 
1000c308:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
1000c30b:	89 87 cc 02 00 00    	mov    DWORD PTR [edi+0x2cc],eax
1000c311:	e8 0a 4e 0b 00       	call   0x100c1120
1000c316:	85 c0                	test   eax,eax
1000c318:	0f 85 72 0d 00 00    	jne    0x1000d090
1000c31e:	81 8f 80 01 00 00 00 	or     DWORD PTR [edi+0x180],0x40000000
1000c325:	00 00 40 
1000c328:	5f                   	pop    edi
1000c329:	5e                   	pop    esi
1000c32a:	5b                   	pop    ebx
1000c32b:	8b e5                	mov    esp,ebp
1000c32d:	5d                   	pop    ebp
1000c32e:	c2 04 00             	ret    0x4
1000c331:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
1000c334:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
1000c33a:	e8 61 b4 00 00       	call   0x100177a0
1000c33f:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1000c342:	f3 0f 10 48 08       	movss  xmm1,DWORD PTR [eax+0x8]
1000c347:	f3 0f 10 40 0c       	movss  xmm0,DWORD PTR [eax+0xc]
1000c34c:	f3 0f 5c 46 0c       	subss  xmm0,DWORD PTR [esi+0xc]
1000c351:	f3 0f 5c 4e 08       	subss  xmm1,DWORD PTR [esi+0x8]
1000c356:	f3 0f 59 c0          	mulss  xmm0,xmm0
1000c35a:	f3 0f 59 c9          	mulss  xmm1,xmm1
1000c35e:	f3 0f 58 c1          	addss  xmm0,xmm1
1000c362:	0f 57 c9             	xorps  xmm1,xmm1
1000c365:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000c368:	66 0f 2e c8          	ucomisd xmm1,xmm0
1000c36c:	77 06                	ja     0x1000c374
1000c36e:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1000c372:	eb 05                	jmp    0x1000c379
1000c374:	e8 17 fb 15 00       	call   0x1016be90
1000c379:	0f 57 c9             	xorps  xmm1,xmm1
1000c37c:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
1000c380:	f3 0f 10 87 60 03 00 	movss  xmm0,DWORD PTR [edi+0x360]
1000c387:	00 
1000c388:	0f 2f c1             	comiss xmm0,xmm1
1000c38b:	76 79                	jbe    0x1000c406
1000c38d:	f7 87 80 01 00 00 00 	test   DWORD PTR [edi+0x180],0x40000000
1000c394:	00 00 40 
1000c397:	75 0a                	jne    0x1000c3a3
1000c399:	c7 87 2c 02 00 00 04 	mov    DWORD PTR [edi+0x22c],0x4
1000c3a0:	00 00 00 
1000c3a3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000c3a8:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1000c3ae:	03 87 58 03 00 00    	add    eax,DWORD PTR [edi+0x358]
1000c3b4:	50                   	push   eax
1000c3b5:	6a 00                	push   0x0
1000c3b7:	e8 d4 c1 10 00       	call   0x10118590
1000c3bc:	83 c4 08             	add    esp,0x8
1000c3bf:	c7 87 58 03 00 00 00 	mov    DWORD PTR [edi+0x358],0x0
1000c3c6:	00 00 00 
1000c3c9:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
1000c3cf:	8b f0                	mov    esi,eax
1000c3d1:	6a 00                	push   0x0
1000c3d3:	e8 68 b3 00 00       	call   0x10017740
1000c3d8:	85 f6                	test   esi,esi
1000c3da:	74 11                	je     0x1000c3ed
1000c3dc:	57                   	push   edi
1000c3dd:	8b ce                	mov    ecx,esi
1000c3df:	e8 4c 2f 10 00       	call   0x1010f330
1000c3e4:	5f                   	pop    edi
1000c3e5:	5e                   	pop    esi
1000c3e6:	5b                   	pop    ebx
1000c3e7:	8b e5                	mov    esp,ebp
1000c3e9:	5d                   	pop    ebp
1000c3ea:	c2 04 00             	ret    0x4
1000c3ed:	68 18 20 1a 10       	push   0x101a2018
1000c3f2:	6a 01                	push   0x1
1000c3f4:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000c3fa:	83 c4 08             	add    esp,0x8
1000c3fd:	5f                   	pop    edi
1000c3fe:	5e                   	pop    esi
1000c3ff:	5b                   	pop    ebx
1000c400:	8b e5                	mov    esp,ebp
1000c402:	5d                   	pop    ebp
1000c403:	c2 04 00             	ret    0x4
1000c406:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
1000c40c:	e8 8f b3 00 00       	call   0x100177a0
1000c411:	8b 9f 5c 03 00 00    	mov    ebx,DWORD PTR [edi+0x35c]
1000c417:	8b cf                	mov    ecx,edi
1000c419:	f7 db                	neg    ebx
1000c41b:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1000c41e:	1b db                	sbb    ebx,ebx
1000c420:	83 c3 04             	add    ebx,0x4
1000c423:	53                   	push   ebx
1000c424:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
1000c429:	66 0f d6 87 c4 02 00 	movq   QWORD PTR [edi+0x2c4],xmm0
1000c430:	00 
1000c431:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
1000c434:	89 87 cc 02 00 00    	mov    DWORD PTR [edi+0x2cc],eax
1000c43a:	e8 11 25 00 00       	call   0x1000e950
1000c43f:	83 f8 ff             	cmp    eax,0xffffffff
1000c442:	75 2f                	jne    0x1000c473
1000c444:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000c449:	33 db                	xor    ebx,ebx
1000c44b:	39 9f 5c 03 00 00    	cmp    DWORD PTR [edi+0x35c],ebx
1000c451:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1000c454:	0f 95 c3             	setne  bl
1000c457:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1000c45d:	83 c3 03             	add    ebx,0x3
1000c460:	03 01                	add    eax,DWORD PTR [ecx]
1000c462:	50                   	push   eax
1000c463:	68 58 20 1a 10       	push   0x101a2058
1000c468:	6a 02                	push   0x2
1000c46a:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000c470:	83 c4 0c             	add    esp,0xc
1000c473:	51                   	push   ecx
1000c474:	c7 04 24 00 00 00 3f 	mov    DWORD PTR [esp],0x3f000000
1000c47b:	8b cf                	mov    ecx,edi
1000c47d:	53                   	push   ebx
1000c47e:	e8 9d 4c 0b 00       	call   0x100c1120
1000c483:	85 c0                	test   eax,eax
1000c485:	0f 85 05 0c 00 00    	jne    0x1000d090
1000c48b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000c490:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1000c494:	f3 0f 58 05 a0 1e 1a 	addss  xmm0,DWORD PTR ds:0x101a1ea0
1000c49b:	10 
1000c49c:	81 8f 80 01 00 00 00 	or     DWORD PTR [edi+0x180],0x40000000
1000c4a3:	00 00 40 
1000c4a6:	f3 0f 11 87 64 03 00 	movss  DWORD PTR [edi+0x364],xmm0
1000c4ad:	00 
1000c4ae:	5f                   	pop    edi
1000c4af:	5e                   	pop    esi
1000c4b0:	5b                   	pop    ebx
1000c4b1:	8b e5                	mov    esp,ebp
1000c4b3:	5d                   	pop    ebp
1000c4b4:	c2 04 00             	ret    0x4
1000c4b7:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
1000c4ba:	85 c0                	test   eax,eax
1000c4bc:	0f 84 17 01 00 00    	je     0x1000c5d9
1000c4c2:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1000c4c5:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1000c4c8:	f3 0f 10 48 08       	movss  xmm1,DWORD PTR [eax+0x8]
1000c4cd:	f3 0f 10 50 0c       	movss  xmm2,DWORD PTR [eax+0xc]
1000c4d2:	f3 0f 5c 51 0c       	subss  xmm2,DWORD PTR [ecx+0xc]
1000c4d7:	f3 0f 5c 49 08       	subss  xmm1,DWORD PTR [ecx+0x8]
1000c4dc:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
1000c4e1:	f3 0f 5c 41 10       	subss  xmm0,DWORD PTR [ecx+0x10]
1000c4e6:	f3 0f 59 d2          	mulss  xmm2,xmm2
1000c4ea:	f3 0f 59 c9          	mulss  xmm1,xmm1
1000c4ee:	f3 0f 59 c0          	mulss  xmm0,xmm0
1000c4f2:	f3 0f 58 d1          	addss  xmm2,xmm1
1000c4f6:	0f 57 c9             	xorps  xmm1,xmm1
1000c4f9:	f3 0f 58 d0          	addss  xmm2,xmm0
1000c4fd:	0f 5a c2             	cvtps2pd xmm0,xmm2
1000c500:	66 0f 2e c8          	ucomisd xmm1,xmm0
1000c504:	77 06                	ja     0x1000c50c
1000c506:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1000c50a:	eb 05                	jmp    0x1000c511
1000c50c:	e8 7f f9 15 00       	call   0x1016be90
1000c511:	0f 57 c9             	xorps  xmm1,xmm1
1000c514:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
1000c518:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
1000c51f:	10 
1000c520:	0f 2f c1             	comiss xmm0,xmm1
1000c523:	0f 87 b0 00 00 00    	ja     0x1000c5d9
1000c529:	33 db                	xor    ebx,ebx
1000c52b:	8b cf                	mov    ecx,edi
1000c52d:	83 7c 24 14 05       	cmp    DWORD PTR [esp+0x14],0x5
1000c532:	0f 95 c3             	setne  bl
1000c535:	83 c3 03             	add    ebx,0x3
1000c538:	53                   	push   ebx
1000c539:	e8 12 24 00 00       	call   0x1000e950
1000c53e:	83 f8 ff             	cmp    eax,0xffffffff
1000c541:	0f 84 92 00 00 00    	je     0x1000c5d9
1000c547:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
1000c54a:	85 c0                	test   eax,eax
1000c54c:	74 54                	je     0x1000c5a2
1000c54e:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1000c551:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
1000c556:	66 0f d6 44 24 1c    	movq   QWORD PTR [esp+0x1c],xmm0
1000c55c:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
1000c55f:	89 44 24 24          	mov    DWORD PTR [esp+0x24],eax
1000c563:	8d 44 24 1c          	lea    eax,[esp+0x1c]
1000c567:	50                   	push   eax
1000c568:	51                   	push   ecx
1000c569:	c7 04 24 00 00 00 40 	mov    DWORD PTR [esp],0x40000000
1000c570:	8b cf                	mov    ecx,edi
1000c572:	53                   	push   ebx
1000c573:	e8 08 4b 0b 00       	call   0x100c1080
1000c578:	85 c0                	test   eax,eax
1000c57a:	0f 85 81 f7 ff ff    	jne    0x1000bd01
1000c580:	81 8f 80 01 00 00 00 	or     DWORD PTR [edi+0x180],0x40000000
1000c587:	00 00 40 
1000c58a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000c58f:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1000c592:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1000c598:	03 01                	add    eax,DWORD PTR [ecx]
1000c59a:	50                   	push   eax
1000c59b:	68 98 20 1a 10       	push   0x101a2098
1000c5a0:	eb 20                	jmp    0x1000c5c2
1000c5a2:	81 8f 80 01 00 00 00 	or     DWORD PTR [edi+0x180],0x40000000
1000c5a9:	00 00 40 
1000c5ac:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000c5b1:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1000c5b4:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1000c5ba:	03 01                	add    eax,DWORD PTR [ecx]
1000c5bc:	50                   	push   eax
1000c5bd:	68 b8 20 1a 10       	push   0x101a20b8
1000c5c2:	6a 02                	push   0x2
1000c5c4:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000c5ca:	83 c4 0c             	add    esp,0xc
1000c5cd:	8b cf                	mov    ecx,edi
1000c5cf:	e8 9c 54 0b 00       	call   0x100c1a70
1000c5d4:	e9 28 f7 ff ff       	jmp    0x1000bd01
1000c5d9:	f7 87 80 01 00 00 00 	test   DWORD PTR [edi+0x180],0x40000000
1000c5e0:	00 00 40 
1000c5e3:	0f 85 a7 0a 00 00    	jne    0x1000d090
1000c5e9:	c7 87 2c 02 00 00 04 	mov    DWORD PTR [edi+0x22c],0x4
1000c5f0:	00 00 00 
1000c5f3:	e9 09 f7 ff ff       	jmp    0x1000bd01
1000c5f8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000c5fd:	8b 00                	mov    eax,DWORD PTR [eax]
1000c5ff:	89 87 10 02 00 00    	mov    DWORD PTR [edi+0x210],eax
1000c605:	e9 f7 f6 ff ff       	jmp    0x1000bd01
1000c60a:	c7 87 18 02 00 00 1e 	mov    DWORD PTR [edi+0x218],0x1e
1000c611:	00 00 00 
1000c614:	5f                   	pop    edi
1000c615:	5e                   	pop    esi
1000c616:	5b                   	pop    ebx
1000c617:	8b e5                	mov    esp,ebp
1000c619:	5d                   	pop    ebp
1000c61a:	c2 04 00             	ret    0x4
1000c61d:	c7 87 18 02 00 00 1f 	mov    DWORD PTR [edi+0x218],0x1f
1000c624:	00 00 00 
1000c627:	5f                   	pop    edi
1000c628:	5e                   	pop    esi
1000c629:	5b                   	pop    ebx
1000c62a:	8b e5                	mov    esp,ebp
1000c62c:	5d                   	pop    ebp
1000c62d:	c2 04 00             	ret    0x4
1000c630:	c7 87 18 02 00 00 1c 	mov    DWORD PTR [edi+0x218],0x1c
1000c637:	00 00 00 
1000c63a:	5f                   	pop    edi
1000c63b:	5e                   	pop    esi
1000c63c:	5b                   	pop    ebx
1000c63d:	8b e5                	mov    esp,ebp
1000c63f:	5d                   	pop    ebp
1000c640:	c2 04 00             	ret    0x4
1000c643:	c7 87 18 02 00 00 1d 	mov    DWORD PTR [edi+0x218],0x1d
1000c64a:	00 00 00 
1000c64d:	5f                   	pop    edi
1000c64e:	5e                   	pop    esi
1000c64f:	5b                   	pop    ebx
1000c650:	8b e5                	mov    esp,ebp
1000c652:	5d                   	pop    ebp
1000c653:	c2 04 00             	ret    0x4
1000c656:	c7 87 18 02 00 00 20 	mov    DWORD PTR [edi+0x218],0x20
1000c65d:	00 00 00 
1000c660:	5f                   	pop    edi
1000c661:	5e                   	pop    esi
1000c662:	5b                   	pop    ebx
1000c663:	8b e5                	mov    esp,ebp
1000c665:	5d                   	pop    ebp
1000c666:	c2 04 00             	ret    0x4
1000c669:	c7 87 18 02 00 00 3c 	mov    DWORD PTR [edi+0x218],0x3c
1000c670:	00 00 00 
1000c673:	5f                   	pop    edi
1000c674:	5e                   	pop    esi
1000c675:	5b                   	pop    ebx
1000c676:	8b e5                	mov    esp,ebp
1000c678:	5d                   	pop    ebp
1000c679:	c2 04 00             	ret    0x4
1000c67c:	c7 87 18 02 00 00 3d 	mov    DWORD PTR [edi+0x218],0x3d
1000c683:	00 00 00 
1000c686:	5f                   	pop    edi
1000c687:	5e                   	pop    esi
1000c688:	5b                   	pop    ebx
1000c689:	8b e5                	mov    esp,ebp
1000c68b:	5d                   	pop    ebp
1000c68c:	c2 04 00             	ret    0x4
1000c68f:	f3 0f 2c 46 04       	cvttss2si eax,DWORD PTR [esi+0x4]
1000c694:	89 87 18 02 00 00    	mov    DWORD PTR [edi+0x218],eax
1000c69a:	e9 62 f6 ff ff       	jmp    0x1000bd01
1000c69f:	6a 00                	push   0x0
1000c6a1:	6a 40                	push   0x40
1000c6a3:	8d 9f f4 02 00 00    	lea    ebx,[edi+0x2f4]
1000c6a9:	8b cf                	mov    ecx,edi
1000c6ab:	53                   	push   ebx
1000c6ac:	e8 0f 05 0b 00       	call   0x100bcbc0
1000c6b1:	85 c0                	test   eax,eax
1000c6b3:	0f 85 48 f6 ff ff    	jne    0x1000bd01
1000c6b9:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
1000c6bc:	f3 0f 10 0b          	movss  xmm1,DWORD PTR [ebx]
1000c6c0:	f3 0f 10 53 04       	movss  xmm2,DWORD PTR [ebx+0x4]
1000c6c5:	f3 0f 10 43 08       	movss  xmm0,DWORD PTR [ebx+0x8]
1000c6ca:	f3 0f 5c 56 0c       	subss  xmm2,DWORD PTR [esi+0xc]
1000c6cf:	f3 0f 5c 4e 08       	subss  xmm1,DWORD PTR [esi+0x8]
1000c6d4:	f3 0f 5c 46 10       	subss  xmm0,DWORD PTR [esi+0x10]
1000c6d9:	f3 0f 59 d2          	mulss  xmm2,xmm2
1000c6dd:	f3 0f 59 c9          	mulss  xmm1,xmm1
1000c6e1:	f3 0f 59 c0          	mulss  xmm0,xmm0
1000c6e5:	f3 0f 58 d1          	addss  xmm2,xmm1
1000c6e9:	0f 57 c9             	xorps  xmm1,xmm1
1000c6ec:	f3 0f 58 d0          	addss  xmm2,xmm0
1000c6f0:	0f 5a c2             	cvtps2pd xmm0,xmm2
1000c6f3:	66 0f 2e c8          	ucomisd xmm1,xmm0
1000c6f7:	77 06                	ja     0x1000c6ff
1000c6f9:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1000c6fd:	eb 05                	jmp    0x1000c704
1000c6ff:	e8 8c f7 15 00       	call   0x1016be90
1000c704:	8b 86 78 01 00 00    	mov    eax,DWORD PTR [esi+0x178]
1000c70a:	83 ec 14             	sub    esp,0x14
1000c70d:	8b cc                	mov    ecx,esp
1000c70f:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
1000c713:	89 01                	mov    DWORD PTR [ecx],eax
1000c715:	8b 86 7c 01 00 00    	mov    eax,DWORD PTR [esi+0x17c]
1000c71b:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000c71e:	8b 86 80 01 00 00    	mov    eax,DWORD PTR [esi+0x180]
1000c724:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000c727:	8b 03                	mov    eax,DWORD PTR [ebx]
1000c729:	f3 0f 11 44 24 10    	movss  DWORD PTR [esp+0x10],xmm0
1000c72f:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
1000c736:	00 
1000c737:	83 ec 0c             	sub    esp,0xc
1000c73a:	8b cc                	mov    ecx,esp
1000c73c:	89 01                	mov    DWORD PTR [ecx],eax
1000c73e:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1000c741:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000c744:	8b 43 08             	mov    eax,DWORD PTR [ebx+0x8]
1000c747:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000c74a:	8b cf                	mov    ecx,edi
1000c74c:	8b 07                	mov    eax,DWORD PTR [edi]
1000c74e:	ff 90 c4 01 00 00    	call   DWORD PTR [eax+0x1c4]
1000c754:	85 c0                	test   eax,eax
1000c756:	0f 85 a5 f5 ff ff    	jne    0x1000bd01
1000c75c:	68 d8 20 1a 10       	push   0x101a20d8
1000c761:	6a 02                	push   0x2
1000c763:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000c769:	83 c4 08             	add    esp,0x8
1000c76c:	81 8f 80 01 00 00 00 	or     DWORD PTR [edi+0x180],0x40000000
1000c773:	00 00 40 
1000c776:	5f                   	pop    edi
1000c777:	5e                   	pop    esi
1000c778:	5b                   	pop    ebx
1000c779:	8b e5                	mov    esp,ebp
1000c77b:	5d                   	pop    ebp
1000c77c:	c2 04 00             	ret    0x4
1000c77f:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
1000c785:	e8 06 b0 00 00       	call   0x10017790
1000c78a:	8b d8                	mov    ebx,eax
1000c78c:	85 db                	test   ebx,ebx
1000c78e:	0f 84 8a fb ff ff    	je     0x1000c31e
1000c794:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1000c797:	8b cf                	mov    ecx,edi
1000c799:	53                   	push   ebx
1000c79a:	6a 02                	push   0x2
1000c79c:	83 c0 08             	add    eax,0x8
1000c79f:	50                   	push   eax
1000c7a0:	e8 1b 04 0b 00       	call   0x100bcbc0
1000c7a5:	85 c0                	test   eax,eax
1000c7a7:	0f 85 54 f5 ff ff    	jne    0x1000bd01
1000c7ad:	8b 73 04             	mov    esi,DWORD PTR [ebx+0x4]
1000c7b0:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000c7b3:	f3 0f 10 4e 08       	movss  xmm1,DWORD PTR [esi+0x8]
1000c7b8:	f3 0f 10 56 0c       	movss  xmm2,DWORD PTR [esi+0xc]
1000c7bd:	f3 0f 5c 50 0c       	subss  xmm2,DWORD PTR [eax+0xc]
1000c7c2:	f3 0f 5c 48 08       	subss  xmm1,DWORD PTR [eax+0x8]
1000c7c7:	f3 0f 10 46 10       	movss  xmm0,DWORD PTR [esi+0x10]
1000c7cc:	f3 0f 5c 40 10       	subss  xmm0,DWORD PTR [eax+0x10]
1000c7d1:	f3 0f 59 d2          	mulss  xmm2,xmm2
1000c7d5:	f3 0f 59 c9          	mulss  xmm1,xmm1
1000c7d9:	f3 0f 59 c0          	mulss  xmm0,xmm0
1000c7dd:	f3 0f 58 d1          	addss  xmm2,xmm1
1000c7e1:	0f 57 c9             	xorps  xmm1,xmm1
1000c7e4:	f3 0f 58 d0          	addss  xmm2,xmm0
1000c7e8:	0f 5a c2             	cvtps2pd xmm0,xmm2
1000c7eb:	66 0f 2e c8          	ucomisd xmm1,xmm0
1000c7ef:	77 06                	ja     0x1000c7f7
1000c7f1:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1000c7f5:	eb 05                	jmp    0x1000c7fc
1000c7f7:	e8 94 f6 15 00       	call   0x1016be90
1000c7fc:	8b 86 78 01 00 00    	mov    eax,DWORD PTR [esi+0x178]
1000c802:	83 ec 14             	sub    esp,0x14
1000c805:	8b cc                	mov    ecx,esp
1000c807:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
1000c80b:	89 01                	mov    DWORD PTR [ecx],eax
1000c80d:	8b 86 7c 01 00 00    	mov    eax,DWORD PTR [esi+0x17c]
1000c813:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000c816:	8b 86 80 01 00 00    	mov    eax,DWORD PTR [esi+0x180]
1000c81c:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000c81f:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
1000c822:	f3 0f 11 44 24 10    	movss  DWORD PTR [esp+0x10],xmm0
1000c828:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x0
1000c82f:	00 
1000c830:	83 ec 0c             	sub    esp,0xc
1000c833:	8b cc                	mov    ecx,esp
1000c835:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
1000c838:	89 01                	mov    DWORD PTR [ecx],eax
1000c83a:	8b 42 0c             	mov    eax,DWORD PTR [edx+0xc]
1000c83d:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000c840:	8b 42 10             	mov    eax,DWORD PTR [edx+0x10]
1000c843:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000c846:	8b cf                	mov    ecx,edi
1000c848:	8b 07                	mov    eax,DWORD PTR [edi]
1000c84a:	ff 90 c4 01 00 00    	call   DWORD PTR [eax+0x1c4]
1000c850:	85 c0                	test   eax,eax
1000c852:	0f 85 a9 f4 ff ff    	jne    0x1000bd01
1000c858:	68 f4 20 1a 10       	push   0x101a20f4
1000c85d:	e9 ff fe ff ff       	jmp    0x1000c761
1000c862:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000c865:	83 c0 50             	add    eax,0x50
1000c868:	50                   	push   eax
1000c869:	e8 b2 ca 10 00       	call   0x10119320
1000c86e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000c873:	83 c4 04             	add    esp,0x4
1000c876:	f3 0f 10 15 04 1f 1a 	movss  xmm2,DWORD PTR ds:0x101a1f04
1000c87d:	10 
1000c87e:	8b cf                	mov    ecx,edi
1000c880:	f3 0f 10 87 f4 02 00 	movss  xmm0,DWORD PTR [edi+0x2f4]
1000c887:	00 
1000c888:	f3 0f 10 48 28       	movss  xmm1,DWORD PTR [eax+0x28]
1000c88d:	f3 0f 10 58 2c       	movss  xmm3,DWORD PTR [eax+0x2c]
1000c892:	f3 0f 10 60 30       	movss  xmm4,DWORD PTR [eax+0x30]
1000c897:	8d 44 24 1c          	lea    eax,[esp+0x1c]
1000c89b:	f3 0f 59 ca          	mulss  xmm1,xmm2
1000c89f:	6a 00                	push   0x0
1000c8a1:	f3 0f 59 da          	mulss  xmm3,xmm2
1000c8a5:	6a 40                	push   0x40
1000c8a7:	f3 0f 5c c1          	subss  xmm0,xmm1
1000c8ab:	f3 0f 59 e2          	mulss  xmm4,xmm2
1000c8af:	50                   	push   eax
1000c8b0:	f3 0f 11 44 24 28    	movss  DWORD PTR [esp+0x28],xmm0
1000c8b6:	f3 0f 10 87 f8 02 00 	movss  xmm0,DWORD PTR [edi+0x2f8]
1000c8bd:	00 
1000c8be:	f3 0f 5c c3          	subss  xmm0,xmm3
1000c8c2:	f3 0f 11 44 24 2c    	movss  DWORD PTR [esp+0x2c],xmm0
1000c8c8:	f3 0f 10 87 fc 02 00 	movss  xmm0,DWORD PTR [edi+0x2fc]
1000c8cf:	00 
1000c8d0:	f3 0f 5c c4          	subss  xmm0,xmm4
1000c8d4:	f3 0f 11 44 24 30    	movss  DWORD PTR [esp+0x30],xmm0
1000c8da:	e8 e1 02 0b 00       	call   0x100bcbc0
1000c8df:	85 c0                	test   eax,eax
1000c8e1:	0f 85 1a f4 ff ff    	jne    0x1000bd01
1000c8e7:	68 10 21 1a 10       	push   0x101a2110
1000c8ec:	e9 70 fe ff ff       	jmp    0x1000c761
1000c8f1:	68 30 21 1a 10       	push   0x101a2130
1000c8f6:	6a 00                	push   0x0
1000c8f8:	e8 63 bb 10 00       	call   0x10118460
1000c8fd:	83 c4 08             	add    esp,0x8
1000c900:	8b cf                	mov    ecx,edi
1000c902:	50                   	push   eax
1000c903:	6a 40                	push   0x40
1000c905:	8d 87 c4 02 00 00    	lea    eax,[edi+0x2c4]
1000c90b:	50                   	push   eax
1000c90c:	e8 af 02 0b 00       	call   0x100bcbc0
1000c911:	85 c0                	test   eax,eax
1000c913:	0f 85 e8 f3 ff ff    	jne    0x1000bd01
1000c919:	68 38 21 1a 10       	push   0x101a2138
1000c91e:	e9 3e fe ff ff       	jmp    0x1000c761
1000c923:	8b cf                	mov    ecx,edi
1000c925:	e8 46 51 0b 00       	call   0x100c1a70
1000c92a:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
1000c930:	e8 4b ae 00 00       	call   0x10017780
1000c935:	85 c0                	test   eax,eax
1000c937:	74 e0                	je     0x1000c919
1000c939:	51                   	push   ecx
1000c93a:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1000c941:	8b cf                	mov    ecx,edi
1000c943:	ff b7 d0 02 00 00    	push   DWORD PTR [edi+0x2d0]
1000c949:	e8 d2 47 0b 00       	call   0x100c1120
1000c94e:	85 c0                	test   eax,eax
1000c950:	74 c7                	je     0x1000c919
1000c952:	e9 aa f3 ff ff       	jmp    0x1000bd01
1000c957:	8b cf                	mov    ecx,edi
1000c959:	e8 12 51 0b 00       	call   0x100c1a70
1000c95e:	8b 87 4c 03 00 00    	mov    eax,DWORD PTR [edi+0x34c]
1000c964:	85 c0                	test   eax,eax
1000c966:	74 b1                	je     0x1000c919
1000c968:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1000c96b:	83 c0 08             	add    eax,0x8
1000c96e:	50                   	push   eax
1000c96f:	51                   	push   ecx
1000c970:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1000c977:	8b cf                	mov    ecx,edi
1000c979:	ff b7 d0 02 00 00    	push   DWORD PTR [edi+0x2d0]
1000c97f:	e8 fc 46 0b 00       	call   0x100c1080
1000c984:	85 c0                	test   eax,eax
1000c986:	74 91                	je     0x1000c919
1000c988:	e9 74 f3 ff ff       	jmp    0x1000bd01
1000c98d:	6b 87 e8 02 00 00 58 	imul   eax,DWORD PTR [edi+0x2e8],0x58
1000c994:	03 05 bc 38 22 10    	add    eax,DWORD PTR ds:0x102238bc
1000c99a:	50                   	push   eax
1000c99b:	51                   	push   ecx
1000c99c:	c7 04 24 00 00 00 40 	mov    DWORD PTR [esp],0x40000000
1000c9a3:	8b cf                	mov    ecx,edi
1000c9a5:	ff b7 d0 02 00 00    	push   DWORD PTR [edi+0x2d0]
1000c9ab:	e8 d0 46 0b 00       	call   0x100c1080
1000c9b0:	85 c0                	test   eax,eax
1000c9b2:	0f 85 49 f3 ff ff    	jne    0x1000bd01
1000c9b8:	68 50 21 1a 10       	push   0x101a2150
1000c9bd:	e9 9f fd ff ff       	jmp    0x1000c761
1000c9c2:	f3 0f 7e 87 dc 02 00 	movq   xmm0,QWORD PTR [edi+0x2dc]
1000c9c9:	00 
1000c9ca:	8d 8f c4 02 00 00    	lea    ecx,[edi+0x2c4]
1000c9d0:	8b 87 e4 02 00 00    	mov    eax,DWORD PTR [edi+0x2e4]
1000c9d6:	51                   	push   ecx
1000c9d7:	51                   	push   ecx
1000c9d8:	66 0f d6 01          	movq   QWORD PTR [ecx],xmm0
1000c9dc:	c7 04 24 00 00 00 40 	mov    DWORD PTR [esp],0x40000000
1000c9e3:	ff b7 d0 02 00 00    	push   DWORD PTR [edi+0x2d0]
1000c9e9:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000c9ec:	8b cf                	mov    ecx,edi
1000c9ee:	e8 8d 46 0b 00       	call   0x100c1080
1000c9f3:	85 c0                	test   eax,eax
1000c9f5:	0f 85 06 f3 ff ff    	jne    0x1000bd01
1000c9fb:	68 6c 21 1a 10       	push   0x101a216c
1000ca00:	e9 5c fd ff ff       	jmp    0x1000c761
1000ca05:	8b 07                	mov    eax,DWORD PTR [edi]
1000ca07:	8b cf                	mov    ecx,edi
1000ca09:	ff 90 ec 01 00 00    	call   DWORD PTR [eax+0x1ec]
1000ca0f:	85 c0                	test   eax,eax
1000ca11:	74 1e                	je     0x1000ca31
1000ca13:	50                   	push   eax
1000ca14:	51                   	push   ecx
1000ca15:	c7 04 24 00 00 00 40 	mov    DWORD PTR [esp],0x40000000
1000ca1c:	8b cf                	mov    ecx,edi
1000ca1e:	ff b7 d0 02 00 00    	push   DWORD PTR [edi+0x2d0]
1000ca24:	e8 57 46 0b 00       	call   0x100c1080
1000ca29:	85 c0                	test   eax,eax
1000ca2b:	0f 85 d0 f2 ff ff    	jne    0x1000bd01
1000ca31:	68 8c 21 1a 10       	push   0x101a218c
1000ca36:	e9 26 fd ff ff       	jmp    0x1000c761
1000ca3b:	8b 07                	mov    eax,DWORD PTR [edi]
1000ca3d:	8b cf                	mov    ecx,edi
1000ca3f:	ff 90 f0 01 00 00    	call   DWORD PTR [eax+0x1f0]
1000ca45:	85 c0                	test   eax,eax
1000ca47:	74 1e                	je     0x1000ca67
1000ca49:	50                   	push   eax
1000ca4a:	51                   	push   ecx
1000ca4b:	c7 04 24 00 00 00 40 	mov    DWORD PTR [esp],0x40000000
1000ca52:	8b cf                	mov    ecx,edi
1000ca54:	ff b7 d0 02 00 00    	push   DWORD PTR [edi+0x2d0]
1000ca5a:	e8 21 46 0b 00       	call   0x100c1080
1000ca5f:	85 c0                	test   eax,eax
1000ca61:	0f 85 9a f2 ff ff    	jne    0x1000bd01
1000ca67:	68 ac 21 1a 10       	push   0x101a21ac
1000ca6c:	e9 f0 fc ff ff       	jmp    0x1000c761
1000ca71:	6a 04                	push   0x4
1000ca73:	8b cf                	mov    ecx,edi
1000ca75:	e8 d6 1e 00 00       	call   0x1000e950
1000ca7a:	33 c9                	xor    ecx,ecx
1000ca7c:	83 f8 ff             	cmp    eax,0xffffffff
1000ca7f:	0f 95 c1             	setne  cl
1000ca82:	83 c1 03             	add    ecx,0x3
1000ca85:	89 8f d0 02 00 00    	mov    DWORD PTR [edi+0x2d0],ecx
1000ca8b:	e9 71 f2 ff ff       	jmp    0x1000bd01
1000ca90:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000ca93:	83 b8 08 01 00 00 05 	cmp    DWORD PTR [eax+0x108],0x5
1000ca9a:	75 0a                	jne    0x1000caa6
1000ca9c:	c7 87 d0 02 00 00 05 	mov    DWORD PTR [edi+0x2d0],0x5
1000caa3:	00 00 00 
1000caa6:	6a 03                	push   0x3
1000caa8:	8b cf                	mov    ecx,edi
1000caaa:	e8 a1 1e 00 00       	call   0x1000e950
1000caaf:	40                   	inc    eax
1000cab0:	f7 d8                	neg    eax
1000cab2:	1b c0                	sbb    eax,eax
1000cab4:	83 c0 04             	add    eax,0x4
1000cab7:	89 87 d0 02 00 00    	mov    DWORD PTR [edi+0x2d0],eax
1000cabd:	e9 3f f2 ff ff       	jmp    0x1000bd01
1000cac2:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000cac5:	83 c0 50             	add    eax,0x50
1000cac8:	50                   	push   eax
1000cac9:	e8 52 c8 10 00       	call   0x10119320
1000cace:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000cad1:	8d 4c 24 18          	lea    ecx,[esp+0x18]
1000cad5:	f3 0f 10 8f 38 02 00 	movss  xmm1,DWORD PTR [edi+0x238]
1000cadc:	00 
1000cadd:	83 c4 04             	add    esp,0x4
1000cae0:	f3 0f 10 87 3c 02 00 	movss  xmm0,DWORD PTR [edi+0x23c]
1000cae7:	00 
1000cae8:	f3 0f 5c 48 08       	subss  xmm1,DWORD PTR [eax+0x8]
1000caed:	f3 0f 5c 40 0c       	subss  xmm0,DWORD PTR [eax+0xc]
1000caf2:	8d 44 24 0c          	lea    eax,[esp+0xc]
1000caf6:	50                   	push   eax
1000caf7:	f3 0f 11 4c 24 18    	movss  DWORD PTR [esp+0x18],xmm1
1000cafd:	f3 0f 11 44 24 1c    	movss  DWORD PTR [esp+0x1c],xmm0
1000cb03:	e8 58 e7 ff ff       	call   0x1000b260
1000cb08:	8b f0                	mov    esi,eax
1000cb0a:	8d 4c 24 14          	lea    ecx,[esp+0x14]
1000cb0e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000cb13:	f3 0f 10 40 40       	movss  xmm0,DWORD PTR [eax+0x40]
1000cb18:	f3 0f 11 44 24 14    	movss  DWORD PTR [esp+0x14],xmm0
1000cb1e:	f3 0f 10 40 44       	movss  xmm0,DWORD PTR [eax+0x44]
1000cb23:	8d 44 24 1c          	lea    eax,[esp+0x1c]
1000cb27:	50                   	push   eax
1000cb28:	f3 0f 11 44 24 1c    	movss  DWORD PTR [esp+0x1c],xmm0
1000cb2e:	e8 2d e7 ff ff       	call   0x1000b260
1000cb33:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1000cb37:	f3 0f 10 48 04       	movss  xmm1,DWORD PTR [eax+0x4]
1000cb3c:	33 c0                	xor    eax,eax
1000cb3e:	f3 0f 59 4e 04       	mulss  xmm1,DWORD PTR [esi+0x4]
1000cb43:	f3 0f 59 06          	mulss  xmm0,DWORD PTR [esi]
1000cb47:	f3 0f 58 c8          	addss  xmm1,xmm0
1000cb4b:	0f 2f 0d 70 13 1a 10 	comiss xmm1,DWORD PTR ds:0x101a1370
1000cb52:	0f 97 c0             	seta   al
1000cb55:	83 c0 0b             	add    eax,0xb
1000cb58:	89 87 d0 02 00 00    	mov    DWORD PTR [edi+0x2d0],eax
1000cb5e:	e9 9e f1 ff ff       	jmp    0x1000bd01
1000cb63:	8b cf                	mov    ecx,edi
1000cb65:	e8 c6 13 0b 00       	call   0x100bdf30
1000cb6a:	85 c0                	test   eax,eax
1000cb6c:	0f 84 1e 05 00 00    	je     0x1000d090
1000cb72:	e9 8a f1 ff ff       	jmp    0x1000bd01
1000cb77:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
1000cb7c:	51                   	push   ecx
1000cb7d:	8b cf                	mov    ecx,edi
1000cb7f:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1000cb84:	e8 67 0e 0b 00       	call   0x100bd9f0
1000cb89:	e9 73 f1 ff ff       	jmp    0x1000bd01
1000cb8e:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
1000cb91:	68 cc 21 1a 10       	push   0x101a21cc
1000cb96:	56                   	push   esi
1000cb97:	e8 54 df ff ff       	call   0x1000aaf0
1000cb9c:	83 c4 08             	add    esp,0x8
1000cb9f:	85 c0                	test   eax,eax
1000cba1:	74 0d                	je     0x1000cbb0
1000cba3:	83 be 10 01 00 00 01 	cmp    DWORD PTR [esi+0x110],0x1
1000cbaa:	0f 84 e0 04 00 00    	je     0x1000d090
1000cbb0:	68 e4 21 1a 10       	push   0x101a21e4
1000cbb5:	56                   	push   esi
1000cbb6:	e8 35 df ff ff       	call   0x1000aaf0
1000cbbb:	83 c4 08             	add    esp,0x8
1000cbbe:	85 c0                	test   eax,eax
1000cbc0:	0f 85 ca 04 00 00    	jne    0x1000d090
1000cbc6:	68 f8 21 1a 10       	push   0x101a21f8
1000cbcb:	56                   	push   esi
1000cbcc:	e8 1f df ff ff       	call   0x1000aaf0
1000cbd1:	83 c4 08             	add    esp,0x8
1000cbd4:	85 c0                	test   eax,eax
1000cbd6:	0f 85 b4 04 00 00    	jne    0x1000d090
1000cbdc:	68 0c 22 1a 10       	push   0x101a220c
1000cbe1:	56                   	push   esi
1000cbe2:	e8 09 df ff ff       	call   0x1000aaf0
1000cbe7:	83 c4 08             	add    esp,0x8
1000cbea:	85 c0                	test   eax,eax
1000cbec:	74 0d                	je     0x1000cbfb
1000cbee:	83 be 10 01 00 00 01 	cmp    DWORD PTR [esi+0x110],0x1
1000cbf5:	0f 84 95 04 00 00    	je     0x1000d090
1000cbfb:	8b cf                	mov    ecx,edi
1000cbfd:	e8 7e d0 07 00       	call   0x10089c80
1000cc02:	83 f8 3b             	cmp    eax,0x3b
1000cc05:	0f 84 f6 f0 ff ff    	je     0x1000bd01
1000cc0b:	8b cf                	mov    ecx,edi
1000cc0d:	e8 6e d0 07 00       	call   0x10089c80
1000cc12:	89 87 18 02 00 00    	mov    DWORD PTR [edi+0x218],eax
1000cc18:	5f                   	pop    edi
1000cc19:	5e                   	pop    esi
1000cc1a:	5b                   	pop    ebx
1000cc1b:	8b e5                	mov    esp,ebp
1000cc1d:	5d                   	pop    ebp
1000cc1e:	c2 04 00             	ret    0x4
1000cc21:	8b cf                	mov    ecx,edi
1000cc23:	c6 47 09 00          	mov    BYTE PTR [edi+0x9],0x0
1000cc27:	e8 44 4e 0b 00       	call   0x100c1a70
1000cc2c:	8b 07                	mov    eax,DWORD PTR [edi]
1000cc2e:	8b cf                	mov    ecx,edi
1000cc30:	ff 90 0c 02 00 00    	call   DWORD PTR [eax+0x20c]
1000cc36:	89 87 18 02 00 00    	mov    DWORD PTR [edi+0x218],eax
1000cc3c:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000cc3f:	c7 80 74 01 00 00 01 	mov    DWORD PTR [eax+0x174],0x1
1000cc46:	00 00 00 
1000cc49:	5f                   	pop    edi
1000cc4a:	5e                   	pop    esi
1000cc4b:	5b                   	pop    ebx
1000cc4c:	8b e5                	mov    esp,ebp
1000cc4e:	5d                   	pop    ebp
1000cc4f:	c2 04 00             	ret    0x4
1000cc52:	8b 07                	mov    eax,DWORD PTR [edi]
1000cc54:	8b cf                	mov    ecx,edi
1000cc56:	ff 90 30 02 00 00    	call   DWORD PTR [eax+0x230]
1000cc5c:	e9 a0 f0 ff ff       	jmp    0x1000bd01
1000cc61:	8b 07                	mov    eax,DWORD PTR [edi]
1000cc63:	8b cf                	mov    ecx,edi
1000cc65:	c6 87 fc 01 00 00 01 	mov    BYTE PTR [edi+0x1fc],0x1
1000cc6c:	ff 90 2c 02 00 00    	call   DWORD PTR [eax+0x22c]
1000cc72:	e9 8a f0 ff ff       	jmp    0x1000bd01
1000cc77:	8b 07                	mov    eax,DWORD PTR [edi]
1000cc79:	8b cf                	mov    ecx,edi
1000cc7b:	ff 90 34 02 00 00    	call   DWORD PTR [eax+0x234]
1000cc81:	e9 7b f0 ff ff       	jmp    0x1000bd01
1000cc86:	80 bf fc 01 00 00 00 	cmp    BYTE PTR [edi+0x1fc],0x0
1000cc8d:	0f 85 fd 03 00 00    	jne    0x1000d090
1000cc93:	8b 07                	mov    eax,DWORD PTR [edi]
1000cc95:	8b cf                	mov    ecx,edi
1000cc97:	ff 90 38 02 00 00    	call   DWORD PTR [eax+0x238]
1000cc9d:	e9 5f f0 ff ff       	jmp    0x1000bd01
1000cca2:	8b b7 4c 03 00 00    	mov    esi,DWORD PTR [edi+0x34c]
1000cca8:	83 be a8 03 00 00 00 	cmp    DWORD PTR [esi+0x3a8],0x0
1000ccaf:	7f 16                	jg     0x1000ccc7
1000ccb1:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000ccb6:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1000ccba:	0f 2f 86 ac 03 00 00 	comiss xmm0,DWORD PTR [esi+0x3ac]
1000ccc1:	0f 83 3a f0 ff ff    	jae    0x1000bd01
1000ccc7:	8b ce                	mov    ecx,esi
1000ccc9:	e8 52 e3 ff ff       	call   0x1000b020
1000ccce:	85 c0                	test   eax,eax
1000ccd0:	75 61                	jne    0x1000cd33
1000ccd2:	8b 8e 6c 03 00 00    	mov    ecx,DWORD PTR [esi+0x36c]
1000ccd8:	85 c9                	test   ecx,ecx
1000ccda:	74 57                	je     0x1000cd33
1000ccdc:	8b 06                	mov    eax,DWORD PTR [esi]
1000ccde:	6a 00                	push   0x0
1000cce0:	51                   	push   ecx
1000cce1:	57                   	push   edi
1000cce2:	8b ce                	mov    ecx,esi
1000cce4:	ff 90 48 02 00 00    	call   DWORD PTR [eax+0x248]
1000ccea:	8b 97 4c 03 00 00    	mov    edx,DWORD PTR [edi+0x34c]
1000ccf0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000ccf5:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
1000ccfb:	8b 82 70 03 00 00    	mov    eax,DWORD PTR [edx+0x370]
1000cd01:	03 c1                	add    eax,ecx
1000cd03:	50                   	push   eax
1000cd04:	8b 82 6c 03 00 00    	mov    eax,DWORD PTR [edx+0x36c]
1000cd0a:	03 c1                	add    eax,ecx
1000cd0c:	50                   	push   eax
1000cd0d:	e8 8e de ff ff       	call   0x1000aba0
1000cd12:	83 c4 08             	add    esp,0x8
1000cd15:	85 c0                	test   eax,eax
1000cd17:	0f 84 73 03 00 00    	je     0x1000d090
1000cd1d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000cd20:	c7 80 3c 01 00 00 00 	mov    DWORD PTR [eax+0x13c],0x0
1000cd27:	00 00 00 
1000cd2a:	5f                   	pop    edi
1000cd2b:	5e                   	pop    esi
1000cd2c:	5b                   	pop    ebx
1000cd2d:	8b e5                	mov    esp,ebp
1000cd2f:	5d                   	pop    ebp
1000cd30:	c2 04 00             	ret    0x4
1000cd33:	c7 87 18 02 00 00 01 	mov    DWORD PTR [edi+0x218],0x1
1000cd3a:	00 00 00 
1000cd3d:	5f                   	pop    edi
1000cd3e:	5e                   	pop    esi
1000cd3f:	5b                   	pop    ebx
1000cd40:	8b e5                	mov    esp,ebp
1000cd42:	5d                   	pop    ebp
1000cd43:	c2 04 00             	ret    0x4
1000cd46:	8b b7 4c 03 00 00    	mov    esi,DWORD PTR [edi+0x34c]
1000cd4c:	8b ce                	mov    ecx,esi
1000cd4e:	e8 cd e2 ff ff       	call   0x1000b020
1000cd53:	85 c0                	test   eax,eax
1000cd55:	0f 84 aa 00 00 00    	je     0x1000ce05
1000cd5b:	8b 86 8c 03 00 00    	mov    eax,DWORD PTR [esi+0x38c]
1000cd61:	83 f8 07             	cmp    eax,0x7
1000cd64:	77 65                	ja     0x1000cdcb
1000cd66:	ff 24 85 0c d2 00 10 	jmp    DWORD PTR [eax*4+0x1000d20c]
1000cd6d:	c7 87 18 02 00 00 1c 	mov    DWORD PTR [edi+0x218],0x1c
1000cd74:	00 00 00 
1000cd77:	eb 52                	jmp    0x1000cdcb
1000cd79:	c7 87 18 02 00 00 1d 	mov    DWORD PTR [edi+0x218],0x1d
1000cd80:	00 00 00 
1000cd83:	eb 46                	jmp    0x1000cdcb
1000cd85:	c7 87 18 02 00 00 1e 	mov    DWORD PTR [edi+0x218],0x1e
1000cd8c:	00 00 00 
1000cd8f:	eb 3a                	jmp    0x1000cdcb
1000cd91:	c7 87 18 02 00 00 1f 	mov    DWORD PTR [edi+0x218],0x1f
1000cd98:	00 00 00 
1000cd9b:	eb 2e                	jmp    0x1000cdcb
1000cd9d:	c7 87 18 02 00 00 3c 	mov    DWORD PTR [edi+0x218],0x3c
1000cda4:	00 00 00 
1000cda7:	eb 22                	jmp    0x1000cdcb
1000cda9:	c7 87 18 02 00 00 3d 	mov    DWORD PTR [edi+0x218],0x3d
1000cdb0:	00 00 00 
1000cdb3:	eb 16                	jmp    0x1000cdcb
1000cdb5:	c7 87 18 02 00 00 20 	mov    DWORD PTR [edi+0x218],0x20
1000cdbc:	00 00 00 
1000cdbf:	eb 0a                	jmp    0x1000cdcb
1000cdc1:	c7 87 18 02 00 00 07 	mov    DWORD PTR [edi+0x218],0x7
1000cdc8:	00 00 00 
1000cdcb:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000cdce:	c7 80 3c 01 00 00 00 	mov    DWORD PTR [eax+0x13c],0x3f800000
1000cdd5:	00 80 3f 
1000cdd8:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000cddb:	c7 80 08 01 00 00 05 	mov    DWORD PTR [eax+0x108],0x5
1000cde2:	00 00 00 
1000cde5:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000cde8:	81 a0 a8 01 00 00 ff 	and    DWORD PTR [eax+0x1a8],0xfffffdff
1000cdef:	fd ff ff 
1000cdf2:	c7 87 48 03 00 00 00 	mov    DWORD PTR [edi+0x348],0x0
1000cdf9:	00 00 00 
1000cdfc:	5f                   	pop    edi
1000cdfd:	5e                   	pop    esi
1000cdfe:	5b                   	pop    ebx
1000cdff:	8b e5                	mov    esp,ebp
1000ce01:	5d                   	pop    ebp
1000ce02:	c2 04 00             	ret    0x4
1000ce05:	8b 06                	mov    eax,DWORD PTR [esi]
1000ce07:	8b ce                	mov    ecx,esi
1000ce09:	6a 01                	push   0x1
1000ce0b:	ff b6 70 03 00 00    	push   DWORD PTR [esi+0x370]
1000ce11:	57                   	push   edi
1000ce12:	ff 90 48 02 00 00    	call   DWORD PTR [eax+0x248]
1000ce18:	83 bf f8 00 00 00 00 	cmp    DWORD PTR [edi+0xf8],0x0
1000ce1f:	74 07                	je     0x1000ce28
1000ce21:	8b cf                	mov    ecx,edi
1000ce23:	e8 a8 dc ff ff       	call   0x1000aad0
1000ce28:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000ce2b:	c7 80 3c 01 00 00 00 	mov    DWORD PTR [eax+0x13c],0x3f800000
1000ce32:	00 80 3f 
1000ce35:	c7 87 48 03 00 00 00 	mov    DWORD PTR [edi+0x348],0x0
1000ce3c:	00 00 00 
1000ce3f:	5f                   	pop    edi
1000ce40:	5e                   	pop    esi
1000ce41:	5b                   	pop    ebx
1000ce42:	8b e5                	mov    esp,ebp
1000ce44:	5d                   	pop    ebp
1000ce45:	c2 04 00             	ret    0x4
1000ce48:	8b 8f 4c 03 00 00    	mov    ecx,DWORD PTR [edi+0x34c]
1000ce4e:	6a 00                	push   0x0
1000ce50:	e8 3b db 0e 00       	call   0x100fa990
1000ce55:	e9 a7 ee ff ff       	jmp    0x1000bd01
1000ce5a:	8b 8f 4c 03 00 00    	mov    ecx,DWORD PTR [edi+0x34c]
1000ce60:	57                   	push   edi
1000ce61:	e8 ba ec 0e 00       	call   0x100fbb20
1000ce66:	e9 96 ee ff ff       	jmp    0x1000bd01
1000ce6b:	8b 87 4c 03 00 00    	mov    eax,DWORD PTR [edi+0x34c]
1000ce71:	85 c0                	test   eax,eax
1000ce73:	0f 84 88 ee ff ff    	je     0x1000bd01
1000ce79:	8b 88 84 03 00 00    	mov    ecx,DWORD PTR [eax+0x384]
1000ce7f:	83 f9 04             	cmp    ecx,0x4
1000ce82:	74 09                	je     0x1000ce8d
1000ce84:	83 f9 06             	cmp    ecx,0x6
1000ce87:	0f 85 d2 00 00 00    	jne    0x1000cf5f
1000ce8d:	8b 80 88 03 00 00    	mov    eax,DWORD PTR [eax+0x388]
1000ce93:	85 c0                	test   eax,eax
1000ce95:	75 19                	jne    0x1000ceb0
1000ce97:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
1000ce9d:	e8 fe a8 00 00       	call   0x100177a0
1000cea2:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1000cea5:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1000cea8:	8b 40 54             	mov    eax,DWORD PTR [eax+0x54]
1000ceab:	89 41 54             	mov    DWORD PTR [ecx+0x54],eax
1000ceae:	eb 59                	jmp    0x1000cf09
1000ceb0:	83 f8 01             	cmp    eax,0x1
1000ceb3:	75 54                	jne    0x1000cf09
1000ceb5:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
1000ceb8:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
1000cebe:	e8 dd a8 00 00       	call   0x100177a0
1000cec3:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1000cec6:	f3 0f 10 50 0c       	movss  xmm2,DWORD PTR [eax+0xc]
1000cecb:	f3 0f 10 48 10       	movss  xmm1,DWORD PTR [eax+0x10]
1000ced0:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
1000ced5:	8d 44 24 1c          	lea    eax,[esp+0x1c]
1000ced9:	f3 0f 5c 56 0c       	subss  xmm2,DWORD PTR [esi+0xc]
1000cede:	f3 0f 5c 4e 10       	subss  xmm1,DWORD PTR [esi+0x10]
1000cee3:	f3 0f 5c 46 08       	subss  xmm0,DWORD PTR [esi+0x8]
1000cee8:	50                   	push   eax
1000cee9:	f3 0f 11 54 24 24    	movss  DWORD PTR [esp+0x24],xmm2
1000ceef:	f3 0f 11 4c 24 28    	movss  DWORD PTR [esp+0x28],xmm1
1000cef5:	f3 0f 11 44 24 20    	movss  DWORD PTR [esp+0x20],xmm0
1000cefb:	e8 30 da 10 00       	call   0x1011a930
1000cf00:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000cf03:	83 c4 04             	add    esp,0x4
1000cf06:	d9 58 54             	fstp   DWORD PTR [eax+0x54]
1000cf09:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1000cf0c:	0f 57 c9             	xorps  xmm1,xmm1
1000cf0f:	0f 57 c0             	xorps  xmm0,xmm0
1000cf12:	c7 44 24 24 00 00 00 	mov    DWORD PTR [esp+0x24],0x0
1000cf19:	00 
1000cf1a:	0f 14 c1             	unpcklps xmm0,xmm1
1000cf1d:	0f 14 c9             	unpcklps xmm1,xmm1
1000cf20:	8b 41 54             	mov    eax,DWORD PTR [ecx+0x54]
1000cf23:	89 81 ac 00 00 00    	mov    DWORD PTR [ecx+0xac],eax
1000cf29:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1000cf2c:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1000cf30:	c7 44 24 24 00 00 00 	mov    DWORD PTR [esp+0x24],0x0
1000cf37:	00 
1000cf38:	66 0f d6 41 5c       	movq   QWORD PTR [ecx+0x5c],xmm0
1000cf3d:	89 41 64             	mov    DWORD PTR [ecx+0x64],eax
1000cf40:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1000cf43:	8b 44 24 24          	mov    eax,DWORD PTR [esp+0x24]
1000cf47:	66 0f d6 49 20       	movq   QWORD PTR [ecx+0x20],xmm1
1000cf4c:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
1000cf4f:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000cf52:	83 88 18 01 00 00 20 	or     DWORD PTR [eax+0x118],0x20
1000cf59:	8b 87 4c 03 00 00    	mov    eax,DWORD PTR [edi+0x34c]
1000cf5f:	83 b8 84 03 00 00 06 	cmp    DWORD PTR [eax+0x384],0x6
1000cf66:	0f 84 95 ed ff ff    	je     0x1000bd01
1000cf6c:	8b 47 0c             	mov    eax,DWORD PTR [edi+0xc]
1000cf6f:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1000cf72:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1000cf75:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
1000cf7a:	66 0f d6 41 08       	movq   QWORD PTR [ecx+0x8],xmm0
1000cf7f:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
1000cf82:	89 41 10             	mov    DWORD PTR [ecx+0x10],eax
1000cf85:	e9 77 ed ff ff       	jmp    0x1000bd01
1000cf8a:	8b 8f 4c 03 00 00    	mov    ecx,DWORD PTR [edi+0x34c]
1000cf90:	85 c9                	test   ecx,ecx
1000cf92:	0f 84 88 00 00 00    	je     0x1000d020
1000cf98:	83 b9 84 03 00 00 00 	cmp    DWORD PTR [ecx+0x384],0x0
1000cf9f:	74 7f                	je     0x1000d020
1000cfa1:	8b 81 88 03 00 00    	mov    eax,DWORD PTR [ecx+0x388]
1000cfa7:	83 e8 00             	sub    eax,0x0
1000cfaa:	74 49                	je     0x1000cff5
1000cfac:	83 e8 01             	sub    eax,0x1
1000cfaf:	75 6f                	jne    0x1000d020
1000cfb1:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
1000cfb7:	e8 c4 a7 00 00       	call   0x10017780
1000cfbc:	85 c0                	test   eax,eax
1000cfbe:	74 2d                	je     0x1000cfed
1000cfc0:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
1000cfc6:	e8 d5 a7 00 00       	call   0x100177a0
1000cfcb:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
1000cfce:	83 ec 0c             	sub    esp,0xc
1000cfd1:	8b cc                	mov    ecx,esp
1000cfd3:	8b 42 08             	mov    eax,DWORD PTR [edx+0x8]
1000cfd6:	89 01                	mov    DWORD PTR [ecx],eax
1000cfd8:	8b 42 0c             	mov    eax,DWORD PTR [edx+0xc]
1000cfdb:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000cfde:	8b 42 10             	mov    eax,DWORD PTR [edx+0x10]
1000cfe1:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000cfe4:	8b cf                	mov    ecx,edi
1000cfe6:	e8 05 31 0b 00       	call   0x100c00f0
1000cfeb:	eb 33                	jmp    0x1000d020
1000cfed:	8b 87 4c 03 00 00    	mov    eax,DWORD PTR [edi+0x34c]
1000cff3:	eb d6                	jmp    0x1000cfcb
1000cff5:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1000cff8:	51                   	push   ecx
1000cff9:	f3 0f 10 40 54       	movss  xmm0,DWORD PTR [eax+0x54]
1000cffe:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1000d003:	e8 18 a4 10 00       	call   0x10117420
1000d008:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000d00b:	83 c4 04             	add    esp,0x4
1000d00e:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
1000d012:	f3 0f 10 44 24 14    	movss  xmm0,DWORD PTR [esp+0x14]
1000d018:	f3 0f 11 80 ac 00 00 	movss  DWORD PTR [eax+0xac],xmm0
1000d01f:	00 
1000d020:	f7 87 80 01 00 00 00 	test   DWORD PTR [edi+0x180],0x40000000
1000d027:	00 00 40 
1000d02a:	75 0a                	jne    0x1000d036
1000d02c:	c7 87 2c 02 00 00 04 	mov    DWORD PTR [edi+0x22c],0x4
1000d033:	00 00 00 
1000d036:	8b cf                	mov    ecx,edi
1000d038:	c7 87 18 02 00 00 01 	mov    DWORD PTR [edi+0x218],0x1
1000d03f:	00 00 00 
1000d042:	e8 29 4a 0b 00       	call   0x100c1a70
1000d047:	5f                   	pop    edi
1000d048:	5e                   	pop    esi
1000d049:	5b                   	pop    ebx
1000d04a:	8b e5                	mov    esp,ebp
1000d04c:	5d                   	pop    ebp
1000d04d:	c2 04 00             	ret    0x4
1000d050:	f3 0f 2c 46 04       	cvttss2si eax,DWORD PTR [esi+0x4]
1000d055:	89 87 28 02 00 00    	mov    DWORD PTR [edi+0x228],eax
1000d05b:	e9 a1 ec ff ff       	jmp    0x1000bd01
1000d060:	f3 0f 2c 46 04       	cvttss2si eax,DWORD PTR [esi+0x4]
1000d065:	89 87 20 03 00 00    	mov    DWORD PTR [edi+0x320],eax
1000d06b:	e9 91 ec ff ff       	jmp    0x1000bd01
1000d070:	c7 87 20 03 00 00 00 	mov    DWORD PTR [edi+0x320],0x0
1000d077:	00 00 00 
1000d07a:	e9 82 ec ff ff       	jmp    0x1000bd01
1000d07f:	50                   	push   eax
1000d080:	68 20 22 1a 10       	push   0x101a2220
1000d085:	6a 02                	push   0x2
1000d087:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000d08d:	83 c4 0c             	add    esp,0xc
1000d090:	5f                   	pop    edi
1000d091:	5e                   	pop    esi
1000d092:	5b                   	pop    ebx
1000d093:	8b e5                	mov    esp,ebp
1000d095:	5d                   	pop    ebp
1000d096:	c2 04 00             	ret    0x4
