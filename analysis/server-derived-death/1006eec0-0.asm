
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1006eec0 <.text+0x6dec0>:
1006eec0:	55                   	push   ebp
1006eec1:	8b ec                	mov    ebp,esp
1006eec3:	83 ec 0c             	sub    esp,0xc
1006eec6:	53                   	push   ebx
1006eec7:	8b d9                	mov    ebx,ecx
1006eec9:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1006eecc:	83 b8 48 02 00 00 00 	cmp    DWORD PTR [eax+0x248],0x0
1006eed3:	0f 85 8c 01 00 00    	jne    0x1006f065
1006eed9:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1006eedc:	56                   	push   esi
1006eedd:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
1006eee3:	85 c0                	test   eax,eax
1006eee5:	75 0e                	jne    0x1006eef5
1006eee7:	50                   	push   eax
1006eee8:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
1006eeee:	83 c4 04             	add    esp,0x4
1006eef1:	85 c0                	test   eax,eax
1006eef3:	74 26                	je     0x1006ef1b
1006eef5:	8b 70 7c             	mov    esi,DWORD PTR [eax+0x7c]
1006eef8:	85 f6                	test   esi,esi
1006eefa:	74 1f                	je     0x1006ef1b
1006eefc:	8b 06                	mov    eax,DWORD PTR [esi]
1006eefe:	8b ce                	mov    ecx,esi
1006ef00:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
1006ef06:	85 c0                	test   eax,eax
1006ef08:	74 11                	je     0x1006ef1b
1006ef0a:	ff 76 04             	push   DWORD PTR [esi+0x4]
1006ef0d:	e8 ce 36 fa ff       	call   0x100125e0
1006ef12:	83 c4 04             	add    esp,0x4
1006ef15:	89 83 88 03 00 00    	mov    DWORD PTR [ebx+0x388],eax
1006ef1b:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1006ef1e:	0f 57 c0             	xorps  xmm0,xmm0
1006ef21:	f3 0f 10 89 68 01 00 	movss  xmm1,DWORD PTR [ecx+0x168]
1006ef28:	00 
1006ef29:	0f 2e c8             	ucomiss xmm1,xmm0
1006ef2c:	9f                   	lahf
1006ef2d:	f6 c4 44             	test   ah,0x44
1006ef30:	7b 0f                	jnp    0x1006ef41
1006ef32:	8b cb                	mov    ecx,ebx
1006ef34:	e8 17 11 00 00       	call   0x10070050
1006ef39:	5e                   	pop    esi
1006ef3a:	5b                   	pop    ebx
1006ef3b:	8b e5                	mov    esp,ebp
1006ef3d:	5d                   	pop    ebp
1006ef3e:	c2 08 00             	ret    0x8
1006ef41:	c7 81 48 02 00 00 01 	mov    DWORD PTR [ecx+0x248],0x1
1006ef48:	00 00 00 
1006ef4b:	83 3d 14 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f14,0x0
1006ef52:	c7 05 20 2f 22 10 00 	mov    DWORD PTR ds:0x10222f20,0x0
1006ef59:	00 00 00 
1006ef5c:	74 32                	je     0x1006ef90
1006ef5e:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
1006ef64:	8b 01                	mov    eax,DWORD PTR [ecx]
1006ef66:	ff 50 20             	call   DWORD PTR [eax+0x20]
1006ef69:	85 c0                	test   eax,eax
1006ef6b:	74 23                	je     0x1006ef90
1006ef6d:	6a 00                	push   0x0
1006ef6f:	6a 00                	push   0x0
1006ef71:	ff 35 d8 66 22 10    	push   DWORD PTR ds:0x102266d8
1006ef77:	6a 02                	push   0x2
1006ef79:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1006ef7f:	6a 00                	push   0x0
1006ef81:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1006ef87:	83 c4 14             	add    esp,0x14
1006ef8a:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1006ef90:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1006ef95:	be 01 00 00 00       	mov    esi,0x1
1006ef9a:	39 b0 90 00 00 00    	cmp    DWORD PTR [eax+0x90],esi
1006efa0:	0f 8c 9b 00 00 00    	jl     0x1006f041
1006efa6:	57                   	push   edi
1006efa7:	56                   	push   esi
1006efa8:	e8 d3 a6 0a 00       	call   0x10119680
1006efad:	8b f8                	mov    edi,eax
1006efaf:	83 c4 04             	add    esp,0x4
1006efb2:	85 ff                	test   edi,edi
1006efb4:	74 78                	je     0x1006f02e
1006efb6:	6a 00                	push   0x0
1006efb8:	68 ff 00 00 00       	push   0xff
1006efbd:	83 ec 08             	sub    esp,0x8
1006efc0:	c7 45 f4 00 00 00 00 	mov    DWORD PTR [ebp-0xc],0x0
1006efc7:	8d 45 f4             	lea    eax,[ebp-0xc]
1006efca:	c7 45 f8 00 00 00 00 	mov    DWORD PTR [ebp-0x8],0x0
1006efd1:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
1006efd8:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x3f000000
1006efdf:	3f 
1006efe0:	c7 04 24 00 00 00 40 	mov    DWORD PTR [esp],0x40000000
1006efe7:	50                   	push   eax
1006efe8:	57                   	push   edi
1006efe9:	e8 12 ac 0a 00       	call   0x10119c00
1006efee:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1006eff1:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1006eff7:	6a 00                	push   0x0
1006eff9:	ff 35 7c 66 22 10    	push   DWORD PTR ds:0x1022667c
1006efff:	6a 01                	push   0x1
1006f001:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1006f007:	6a 01                	push   0x1
1006f009:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1006f00f:	6a 00                	push   0x0
1006f011:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1006f017:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1006f01d:	83 c4 2c             	add    esp,0x2c
1006f020:	8b cf                	mov    ecx,edi
1006f022:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1006f029:	e8 d2 b5 07 00       	call   0x100ea600
1006f02e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1006f033:	46                   	inc    esi
1006f034:	3b b0 90 00 00 00    	cmp    esi,DWORD PTR [eax+0x90]
1006f03a:	0f 8e 67 ff ff ff    	jle    0x1006efa7
1006f040:	5f                   	pop    edi
1006f041:	8b 03                	mov    eax,DWORD PTR [ebx]
1006f043:	51                   	push   ecx
1006f044:	8b cb                	mov    ecx,ebx
1006f046:	c7 43 78 50 00 07 10 	mov    DWORD PTR [ebx+0x78],0x10070050
1006f04d:	c7 04 24 00 00 00 40 	mov    DWORD PTR [esp],0x40000000
1006f054:	ff 50 08             	call   DWORD PTR [eax+0x8]
1006f057:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1006f05a:	5e                   	pop    esi
1006f05b:	81 88 18 01 00 00 80 	or     DWORD PTR [eax+0x118],0x80
1006f062:	00 00 00 
1006f065:	5b                   	pop    ebx
1006f066:	8b e5                	mov    esp,ebp
1006f068:	5d                   	pop    ebp
1006f069:	c2 08 00             	ret    0x8
