
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10012f70 <.text+0x11f70>:
10012f70:	55                   	push   ebp
10012f71:	8b ec                	mov    ebp,esp
10012f73:	53                   	push   ebx
10012f74:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10012f77:	56                   	push   esi
10012f78:	57                   	push   edi
10012f79:	8b f9                	mov    edi,ecx
10012f7b:	be 30 21 1a 10       	mov    esi,0x101a2130
10012f80:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10012f83:	8b 10                	mov    edx,DWORD PTR [eax]
10012f85:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10012f8a:	03 90 98 00 00 00    	add    edx,DWORD PTR [eax+0x98]
10012f90:	8a 02                	mov    al,BYTE PTR [edx]
10012f92:	3a 06                	cmp    al,BYTE PTR [esi]
10012f94:	75 1a                	jne    0x10012fb0
10012f96:	84 c0                	test   al,al
10012f98:	74 12                	je     0x10012fac
10012f9a:	8a 42 01             	mov    al,BYTE PTR [edx+0x1]
10012f9d:	3a 46 01             	cmp    al,BYTE PTR [esi+0x1]
10012fa0:	75 0e                	jne    0x10012fb0
10012fa2:	83 c2 02             	add    edx,0x2
10012fa5:	83 c6 02             	add    esi,0x2
10012fa8:	84 c0                	test   al,al
10012faa:	75 e4                	jne    0x10012f90
10012fac:	33 c0                	xor    eax,eax
10012fae:	eb 05                	jmp    0x10012fb5
10012fb0:	1b c0                	sbb    eax,eax
10012fb2:	83 c8 01             	or     eax,0x1
10012fb5:	85 c0                	test   eax,eax
10012fb7:	0f 85 c5 00 00 00    	jne    0x10013082
10012fbd:	8d 8f e4 00 00 00    	lea    ecx,[edi+0xe4]
10012fc3:	53                   	push   ebx
10012fc4:	e8 77 47 00 00       	call   0x10017740
10012fc9:	8b cf                	mov    ecx,edi
10012fcb:	e8 30 fd ff ff       	call   0x10012d00
10012fd0:	8b f0                	mov    esi,eax
10012fd2:	85 f6                	test   esi,esi
10012fd4:	0f 84 a8 00 00 00    	je     0x10013082
10012fda:	53                   	push   ebx
10012fdb:	ff b7 7c 01 00 00    	push   DWORD PTR [edi+0x17c]
10012fe1:	e8 7a 60 10 00       	call   0x10119060
10012fe6:	83 c4 08             	add    esp,0x8
10012fe9:	85 c0                	test   eax,eax
10012feb:	75 1d                	jne    0x1001300a
10012fed:	6a 01                	push   0x1
10012fef:	6a 01                	push   0x1
10012ff1:	8d 87 b4 01 00 00    	lea    eax,[edi+0x1b4]
10012ff7:	50                   	push   eax
10012ff8:	ff 77 04             	push   DWORD PTR [edi+0x4]
10012ffb:	e8 10 b0 07 00       	call   0x1008e010
10013000:	83 c4 10             	add    esp,0x10
10013003:	5f                   	pop    edi
10013004:	5e                   	pop    esi
10013005:	5b                   	pop    ebx
10013006:	5d                   	pop    ebp
10013007:	c2 04 00             	ret    0x4
1001300a:	c7 47 7c 00 00 00 00 	mov    DWORD PTR [edi+0x7c],0x0
10013011:	83 fe 02             	cmp    esi,0x2
10013014:	75 65                	jne    0x1001307b
10013016:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
10013019:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001301e:	6a 64                	push   0x64
10013020:	6a 00                	push   0x0
10013022:	8b 96 ec 01 00 00    	mov    edx,DWORD PTR [esi+0x1ec]
10013028:	83 ec 08             	sub    esp,0x8
1001302b:	03 90 98 00 00 00    	add    edx,DWORD PTR [eax+0x98]
10013031:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10013038:	3f 
10013039:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10013040:	52                   	push   edx
10013041:	6a 02                	push   0x2
10013043:	ff b6 0c 02 00 00    	push   DWORD PTR [esi+0x20c]
10013049:	e8 a2 99 0e 00       	call   0x100fc9f0
1001304e:	83 c4 18             	add    esp,0x18
10013051:	8d 8f e4 00 00 00    	lea    ecx,[edi+0xe4]
10013057:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1001305e:	6a 03                	push   0x3
10013060:	e8 2b 47 00 00       	call   0x10017790
10013065:	50                   	push   eax
10013066:	8b cf                	mov    ecx,edi
10013068:	e8 c3 f8 0e 00       	call   0x10102930
1001306d:	8b cf                	mov    ecx,edi
1001306f:	e8 dc fc ff ff       	call   0x10012d50
10013074:	5f                   	pop    edi
10013075:	5e                   	pop    esi
10013076:	5b                   	pop    ebx
10013077:	5d                   	pop    ebp
10013078:	c2 04 00             	ret    0x4
1001307b:	8b cf                	mov    ecx,edi
1001307d:	e8 fe f9 ff ff       	call   0x10012a80
10013082:	5f                   	pop    edi
10013083:	5e                   	pop    esi
10013084:	5b                   	pop    ebx
10013085:	5d                   	pop    ebp
10013086:	c2 04 00             	ret    0x4
