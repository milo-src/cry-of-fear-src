
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fafb0 <.text+0xf9fb0>:
100fafb0:	55                   	push   ebp
100fafb1:	8b ec                	mov    ebp,esp
100fafb3:	56                   	push   esi
100fafb4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100fafb7:	83 be 28 02 00 00 08 	cmp    DWORD PTR [esi+0x228],0x8
100fafbe:	74 0a                	je     0x100fafca
100fafc0:	c7 86 28 02 00 00 01 	mov    DWORD PTR [esi+0x228],0x1
100fafc7:	00 00 00 
100fafca:	8b 81 90 03 00 00    	mov    eax,DWORD PTR [ecx+0x390]
100fafd0:	83 e8 00             	sub    eax,0x0
100fafd3:	74 15                	je     0x100fafea
100fafd5:	83 e8 01             	sub    eax,0x1
100fafd8:	74 1c                	je     0x100faff6
100fafda:	68 4c df 1d 10       	push   0x101ddf4c
100fafdf:	6a 02                	push   0x2
100fafe1:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100fafe7:	83 c4 08             	add    esp,0x8
100fafea:	8b ce                	mov    ecx,esi
100fafec:	e8 df fa f0 ff       	call   0x1000aad0
100faff1:	5e                   	pop    esi
100faff2:	5d                   	pop    ebp
100faff3:	c2 04 00             	ret    0x4
100faff6:	8b 06                	mov    eax,DWORD PTR [esi]
100faff8:	8b ce                	mov    ecx,esi
100faffa:	6a 20                	push   0x20
100faffc:	ff 90 8c 01 00 00    	call   DWORD PTR [eax+0x18c]
100fb002:	50                   	push   eax
100fb003:	8b ce                	mov    ecx,esi
100fb005:	e8 46 fa f0 ff       	call   0x1000aa50
100fb00a:	5e                   	pop    esi
100fb00b:	5d                   	pop    ebp
100fb00c:	c2 04 00             	ret    0x4
