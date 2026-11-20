
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008ca70 <.text+0x8ba70>:
1008ca70:	55                   	push   ebp
1008ca71:	8b ec                	mov    ebp,esp
1008ca73:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1008ca76:	56                   	push   esi
1008ca77:	8b f1                	mov    esi,ecx
1008ca79:	8d 48 ff             	lea    ecx,[eax-0x1]
1008ca7c:	83 f9 29             	cmp    ecx,0x29
1008ca7f:	0f 87 fc 01 00 00    	ja     0x1008cc81
1008ca85:	ff 24 8d 9c cc 08 10 	jmp    DWORD PTR [ecx*4+0x1008cc9c]
1008ca8c:	8b 86 4c 03 00 00    	mov    eax,DWORD PTR [esi+0x34c]
1008ca92:	85 c0                	test   eax,eax
1008ca94:	75 39                	jne    0x1008cacf
1008ca96:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008ca99:	8b 08                	mov    ecx,DWORD PTR [eax]
1008ca9b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008caa0:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1008caa6:	51                   	push   ecx
1008caa7:	68 74 22 1a 10       	push   0x101a2274
1008caac:	6a 02                	push   0x2
1008caae:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1008cab4:	83 c4 0c             	add    esp,0xc
1008cab7:	8b ce                	mov    ecx,esi
1008cab9:	e8 72 da 06 00       	call   0x100fa530
1008cabe:	8b 06                	mov    eax,DWORD PTR [esi]
1008cac0:	8b ce                	mov    ecx,esi
1008cac2:	6a 01                	push   0x1
1008cac4:	ff 90 8c 01 00 00    	call   DWORD PTR [eax+0x18c]
1008caca:	5e                   	pop    esi
1008cacb:	5d                   	pop    ebp
1008cacc:	c2 04 00             	ret    0x4
1008cacf:	8b 80 84 03 00 00    	mov    eax,DWORD PTR [eax+0x384]
1008cad5:	83 f8 06             	cmp    eax,0x6
1008cad8:	77 39                	ja     0x1008cb13
1008cada:	ff 24 85 44 cd 08 10 	jmp    DWORD PTR [eax*4+0x1008cd44]
1008cae1:	b8 4c 33 21 10       	mov    eax,0x1021334c
1008cae6:	5e                   	pop    esi
1008cae7:	5d                   	pop    ebp
1008cae8:	c2 04 00             	ret    0x4
1008caeb:	b8 20 38 21 10       	mov    eax,0x10213820
1008caf0:	5e                   	pop    esi
1008caf1:	5d                   	pop    ebp
1008caf2:	c2 04 00             	ret    0x4
1008caf5:	b8 24 33 21 10       	mov    eax,0x10213324
1008cafa:	5e                   	pop    esi
1008cafb:	5d                   	pop    ebp
1008cafc:	c2 04 00             	ret    0x4
1008caff:	b8 38 33 21 10       	mov    eax,0x10213338
1008cb04:	5e                   	pop    esi
1008cb05:	5d                   	pop    ebp
1008cb06:	c2 04 00             	ret    0x4
1008cb09:	b8 34 38 21 10       	mov    eax,0x10213834
1008cb0e:	5e                   	pop    esi
1008cb0f:	5d                   	pop    ebp
1008cb10:	c2 04 00             	ret    0x4
1008cb13:	33 c0                	xor    eax,eax
1008cb15:	5e                   	pop    esi
1008cb16:	5d                   	pop    ebp
1008cb17:	c2 04 00             	ret    0x4
1008cb1a:	6a 0e                	push   0xe
1008cb1c:	6a 00                	push   0x0
1008cb1e:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
1008cb24:	83 c4 08             	add    esp,0x8
1008cb27:	85 c0                	test   eax,eax
1008cb29:	0f 85 63 01 00 00    	jne    0x1008cc92
1008cb2f:	8b 06                	mov    eax,DWORD PTR [esi]
1008cb31:	8b ce                	mov    ecx,esi
1008cb33:	ff 90 e4 01 00 00    	call   DWORD PTR [eax+0x1e4]
1008cb39:	85 c0                	test   eax,eax
1008cb3b:	0f 84 51 01 00 00    	je     0x1008cc92
1008cb41:	b8 d4 33 21 10       	mov    eax,0x102133d4
1008cb46:	5e                   	pop    esi
1008cb47:	5d                   	pop    ebp
1008cb48:	c2 04 00             	ret    0x4
1008cb4b:	b8 0c 32 21 10       	mov    eax,0x1021320c
1008cb50:	5e                   	pop    esi
1008cb51:	5d                   	pop    ebp
1008cb52:	c2 04 00             	ret    0x4
1008cb55:	b8 f8 31 21 10       	mov    eax,0x102131f8
1008cb5a:	5e                   	pop    esi
1008cb5b:	5d                   	pop    ebp
1008cb5c:	c2 04 00             	ret    0x4
1008cb5f:	b8 20 32 21 10       	mov    eax,0x10213220
1008cb64:	5e                   	pop    esi
1008cb65:	5d                   	pop    ebp
1008cb66:	c2 04 00             	ret    0x4
1008cb69:	b8 34 32 21 10       	mov    eax,0x10213234
1008cb6e:	5e                   	pop    esi
1008cb6f:	5d                   	pop    ebp
1008cb70:	c2 04 00             	ret    0x4
1008cb73:	b8 48 32 21 10       	mov    eax,0x10213248
1008cb78:	5e                   	pop    esi
1008cb79:	5d                   	pop    ebp
1008cb7a:	c2 04 00             	ret    0x4
1008cb7d:	b8 5c 32 21 10       	mov    eax,0x1021325c
1008cb82:	5e                   	pop    esi
1008cb83:	5d                   	pop    ebp
1008cb84:	c2 04 00             	ret    0x4
1008cb87:	b8 70 32 21 10       	mov    eax,0x10213270
1008cb8c:	5e                   	pop    esi
1008cb8d:	5d                   	pop    ebp
1008cb8e:	c2 04 00             	ret    0x4
1008cb91:	b8 d4 32 21 10       	mov    eax,0x102132d4
1008cb96:	5e                   	pop    esi
1008cb97:	5d                   	pop    ebp
1008cb98:	c2 04 00             	ret    0x4
1008cb9b:	b8 e8 32 21 10       	mov    eax,0x102132e8
1008cba0:	5e                   	pop    esi
1008cba1:	5d                   	pop    ebp
1008cba2:	c2 04 00             	ret    0x4
1008cba5:	b8 a0 34 21 10       	mov    eax,0x102134a0
1008cbaa:	5e                   	pop    esi
1008cbab:	5d                   	pop    ebp
1008cbac:	c2 04 00             	ret    0x4
1008cbaf:	b8 84 32 21 10       	mov    eax,0x10213284
1008cbb4:	5e                   	pop    esi
1008cbb5:	5d                   	pop    ebp
1008cbb6:	c2 04 00             	ret    0x4
1008cbb9:	b8 b4 35 21 10       	mov    eax,0x102135b4
1008cbbe:	5e                   	pop    esi
1008cbbf:	5d                   	pop    ebp
1008cbc0:	c2 04 00             	ret    0x4
1008cbc3:	b8 90 35 21 10       	mov    eax,0x10213590
1008cbc8:	5e                   	pop    esi
1008cbc9:	5d                   	pop    ebp
1008cbca:	c2 04 00             	ret    0x4
1008cbcd:	b8 98 32 21 10       	mov    eax,0x10213298
1008cbd2:	5e                   	pop    esi
1008cbd3:	5d                   	pop    ebp
1008cbd4:	c2 04 00             	ret    0x4
1008cbd7:	b8 ac 32 21 10       	mov    eax,0x102132ac
1008cbdc:	5e                   	pop    esi
1008cbdd:	5d                   	pop    ebp
1008cbde:	c2 04 00             	ret    0x4
1008cbe1:	b8 20 36 21 10       	mov    eax,0x10213620
1008cbe6:	5e                   	pop    esi
1008cbe7:	5d                   	pop    ebp
1008cbe8:	c2 04 00             	ret    0x4
1008cbeb:	b8 4c 36 21 10       	mov    eax,0x1021364c
1008cbf0:	5e                   	pop    esi
1008cbf1:	5d                   	pop    ebp
1008cbf2:	c2 04 00             	ret    0x4
1008cbf5:	b8 78 36 21 10       	mov    eax,0x10213678
1008cbfa:	5e                   	pop    esi
1008cbfb:	5d                   	pop    ebp
1008cbfc:	c2 04 00             	ret    0x4
1008cbff:	b8 a4 36 21 10       	mov    eax,0x102136a4
1008cc04:	5e                   	pop    esi
1008cc05:	5d                   	pop    ebp
1008cc06:	c2 04 00             	ret    0x4
1008cc09:	b8 c0 32 21 10       	mov    eax,0x102132c0
1008cc0e:	5e                   	pop    esi
1008cc0f:	5d                   	pop    ebp
1008cc10:	c2 04 00             	ret    0x4
1008cc13:	b8 00 3a 21 10       	mov    eax,0x10213a00
1008cc18:	5e                   	pop    esi
1008cc19:	5d                   	pop    ebp
1008cc1a:	c2 04 00             	ret    0x4
1008cc1d:	b8 38 39 21 10       	mov    eax,0x10213938
1008cc22:	5e                   	pop    esi
1008cc23:	5d                   	pop    ebp
1008cc24:	c2 04 00             	ret    0x4
1008cc27:	b8 c0 33 21 10       	mov    eax,0x102133c0
1008cc2c:	5e                   	pop    esi
1008cc2d:	5d                   	pop    ebp
1008cc2e:	c2 04 00             	ret    0x4
1008cc31:	b8 a8 37 21 10       	mov    eax,0x102137a8
1008cc36:	5e                   	pop    esi
1008cc37:	5d                   	pop    ebp
1008cc38:	c2 04 00             	ret    0x4
1008cc3b:	b8 dc 37 21 10       	mov    eax,0x102137dc
1008cc40:	5e                   	pop    esi
1008cc41:	5d                   	pop    ebp
1008cc42:	c2 04 00             	ret    0x4
1008cc45:	b8 d4 34 21 10       	mov    eax,0x102134d4
1008cc4a:	5e                   	pop    esi
1008cc4b:	5d                   	pop    ebp
1008cc4c:	c2 04 00             	ret    0x4
1008cc4f:	b8 fc 32 21 10       	mov    eax,0x102132fc
1008cc54:	5e                   	pop    esi
1008cc55:	5d                   	pop    ebp
1008cc56:	c2 04 00             	ret    0x4
1008cc59:	b8 7c 39 21 10       	mov    eax,0x1021397c
1008cc5e:	5e                   	pop    esi
1008cc5f:	5d                   	pop    ebp
1008cc60:	c2 04 00             	ret    0x4
1008cc63:	b8 74 37 21 10       	mov    eax,0x10213774
1008cc68:	5e                   	pop    esi
1008cc69:	5d                   	pop    ebp
1008cc6a:	c2 04 00             	ret    0x4
1008cc6d:	b8 d0 31 21 10       	mov    eax,0x102131d0
1008cc72:	5e                   	pop    esi
1008cc73:	5d                   	pop    ebp
1008cc74:	c2 04 00             	ret    0x4
1008cc77:	b8 1c 3a 21 10       	mov    eax,0x10213a1c
1008cc7c:	5e                   	pop    esi
1008cc7d:	5d                   	pop    ebp
1008cc7e:	c2 04 00             	ret    0x4
1008cc81:	50                   	push   eax
1008cc82:	68 f0 f1 1b 10       	push   0x101bf1f0
1008cc87:	6a 01                	push   0x1
1008cc89:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1008cc8f:	83 c4 0c             	add    esp,0xc
1008cc92:	b8 e4 31 21 10       	mov    eax,0x102131e4
1008cc97:	5e                   	pop    esi
1008cc98:	5d                   	pop    ebp
1008cc99:	c2 04 00             	ret    0x4
