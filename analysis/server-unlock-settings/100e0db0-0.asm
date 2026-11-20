
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e0db0 <.text+0xdfdb0>:
100e0db0:	55                   	push   ebp
100e0db1:	8b ec                	mov    ebp,esp
100e0db3:	6a ff                	push   0xffffffff
100e0db5:	68 9d df 19 10       	push   0x1019df9d
100e0dba:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100e0dc0:	50                   	push   eax
100e0dc1:	83 ec 28             	sub    esp,0x28
100e0dc4:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100e0dc9:	33 c5                	xor    eax,ebp
100e0dcb:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100e0dce:	53                   	push   ebx
100e0dcf:	56                   	push   esi
100e0dd0:	57                   	push   edi
100e0dd1:	50                   	push   eax
100e0dd2:	8d 45 f4             	lea    eax,[ebp-0xc]
100e0dd5:	64 a3 00 00 00 00    	mov    fs:0x0,eax
100e0ddb:	8d 45 cc             	lea    eax,[ebp-0x34]
100e0dde:	50                   	push   eax
100e0ddf:	68 d4 cc 1d 10       	push   0x101dccd4
100e0de4:	ff 15 c4 30 22 10    	call   DWORD PTR ds:0x102230c4
100e0dea:	8b d8                	mov    ebx,eax
100e0dec:	83 c4 08             	add    esp,0x8
100e0def:	85 db                	test   ebx,ebx
100e0df1:	75 18                	jne    0x100e0e0b
100e0df3:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100e0df6:	68 04 da 1d 10       	push   0x101dda04
100e0dfb:	6a 01                	push   0x1
100e0dfd:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100e0e03:	83 c4 0c             	add    esp,0xc
100e0e06:	e9 4c 08 00 00       	jmp    0x100e1657
100e0e0b:	c7 45 e8 00 00 00 00 	mov    DWORD PTR [ebp-0x18],0x0
100e0e12:	c7 45 ec 0f 00 00 00 	mov    DWORD PTR [ebp-0x14],0xf
100e0e19:	c6 45 d8 00          	mov    BYTE PTR [ebp-0x28],0x0
100e0e1d:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100e0e20:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
100e0e27:	81 ff 00 80 00 00    	cmp    edi,0x8000
100e0e2d:	0f 8f 61 01 00 00    	jg     0x100e0f94
100e0e33:	0f 84 4f 01 00 00    	je     0x100e0f88
100e0e39:	81 ff 80 00 00 00    	cmp    edi,0x80
100e0e3f:	0f 8f ad 00 00 00    	jg     0x100e0ef2
100e0e45:	0f 84 9b 00 00 00    	je     0x100e0ee6
100e0e4b:	83 ff 08             	cmp    edi,0x8
100e0e4e:	7f 5f                	jg     0x100e0eaf
100e0e50:	74 51                	je     0x100e0ea3
100e0e52:	83 ff 02             	cmp    edi,0x2
100e0e55:	7f 37                	jg     0x100e0e8e
100e0e57:	74 29                	je     0x100e0e82
100e0e59:	81 ff 00 00 00 80    	cmp    edi,0x80000000
100e0e5f:	74 15                	je     0x100e0e76
100e0e61:	83 ff 01             	cmp    edi,0x1
100e0e64:	0f 85 e3 07 00 00    	jne    0x100e164d
100e0e6a:	c7 45 d4 0f 00 00 00 	mov    DWORD PTR [ebp-0x2c],0xf
100e0e71:	e9 4e 02 00 00       	jmp    0x100e10c4
100e0e76:	c7 45 d4 52 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x52
100e0e7d:	e9 42 02 00 00       	jmp    0x100e10c4
100e0e82:	c7 45 d4 07 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x7
100e0e89:	e9 36 02 00 00       	jmp    0x100e10c4
100e0e8e:	83 ff 04             	cmp    edi,0x4
100e0e91:	0f 85 b6 07 00 00    	jne    0x100e164d
100e0e97:	c7 45 d4 2d 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x2d
100e0e9e:	e9 21 02 00 00       	jmp    0x100e10c4
100e0ea3:	c7 45 d4 16 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x16
100e0eaa:	e9 15 02 00 00       	jmp    0x100e10c4
100e0eaf:	83 ff 10             	cmp    edi,0x10
100e0eb2:	74 26                	je     0x100e0eda
100e0eb4:	83 ff 20             	cmp    edi,0x20
100e0eb7:	74 15                	je     0x100e0ece
100e0eb9:	83 ff 40             	cmp    edi,0x40
100e0ebc:	0f 85 8b 07 00 00    	jne    0x100e164d
100e0ec2:	c7 45 d4 27 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x27
100e0ec9:	e9 f6 01 00 00       	jmp    0x100e10c4
100e0ece:	c7 45 d4 53 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x53
100e0ed5:	e9 ea 01 00 00       	jmp    0x100e10c4
100e0eda:	c7 45 d4 03 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x3
100e0ee1:	e9 de 01 00 00       	jmp    0x100e10c4
100e0ee6:	c7 45 d4 33 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x33
100e0eed:	e9 d2 01 00 00       	jmp    0x100e10c4
100e0ef2:	81 ff 00 08 00 00    	cmp    edi,0x800
100e0ef8:	7f 4e                	jg     0x100e0f48
100e0efa:	74 40                	je     0x100e0f3c
100e0efc:	81 ff 00 01 00 00    	cmp    edi,0x100
100e0f02:	74 2c                	je     0x100e0f30
100e0f04:	81 ff 00 02 00 00    	cmp    edi,0x200
100e0f0a:	74 18                	je     0x100e0f24
100e0f0c:	81 ff 00 04 00 00    	cmp    edi,0x400
100e0f12:	0f 85 35 07 00 00    	jne    0x100e164d
100e0f18:	c7 45 d4 36 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x36
100e0f1f:	e9 a0 01 00 00       	jmp    0x100e10c4
100e0f24:	c7 45 d4 35 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x35
100e0f2b:	e9 94 01 00 00       	jmp    0x100e10c4
100e0f30:	c7 45 d4 34 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x34
100e0f37:	e9 88 01 00 00       	jmp    0x100e10c4
100e0f3c:	c7 45 d4 37 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x37
100e0f43:	e9 7c 01 00 00       	jmp    0x100e10c4
100e0f48:	81 ff 00 10 00 00    	cmp    edi,0x1000
100e0f4e:	74 2c                	je     0x100e0f7c
100e0f50:	81 ff 00 20 00 00    	cmp    edi,0x2000
100e0f56:	74 18                	je     0x100e0f70
100e0f58:	81 ff 00 40 00 00    	cmp    edi,0x4000
100e0f5e:	0f 85 e9 06 00 00    	jne    0x100e164d
100e0f64:	c7 45 d4 3a 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x3a
100e0f6b:	e9 54 01 00 00       	jmp    0x100e10c4
100e0f70:	c7 45 d4 39 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x39
100e0f77:	e9 48 01 00 00       	jmp    0x100e10c4
100e0f7c:	c7 45 d4 38 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x38
100e0f83:	e9 3c 01 00 00       	jmp    0x100e10c4
100e0f88:	c7 45 d4 3b 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x3b
100e0f8f:	e9 30 01 00 00       	jmp    0x100e10c4
100e0f94:	81 ff 00 00 80 00    	cmp    edi,0x800000
100e0f9a:	0f 8f a5 00 00 00    	jg     0x100e1045
100e0fa0:	0f 84 96 00 00 00    	je     0x100e103c
100e0fa6:	81 ff 00 00 08 00    	cmp    edi,0x80000
100e0fac:	7f 4e                	jg     0x100e0ffc
100e0fae:	74 40                	je     0x100e0ff0
100e0fb0:	81 ff 00 00 01 00    	cmp    edi,0x10000
100e0fb6:	74 2c                	je     0x100e0fe4
100e0fb8:	81 ff 00 00 02 00    	cmp    edi,0x20000
100e0fbe:	74 18                	je     0x100e0fd8
100e0fc0:	81 ff 00 00 04 00    	cmp    edi,0x40000
100e0fc6:	0f 85 81 06 00 00    	jne    0x100e164d
100e0fcc:	c7 45 d4 3e 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x3e
100e0fd3:	e9 ec 00 00 00       	jmp    0x100e10c4
100e0fd8:	c7 45 d4 3d 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x3d
100e0fdf:	e9 e0 00 00 00       	jmp    0x100e10c4
100e0fe4:	c7 45 d4 3c 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x3c
100e0feb:	e9 d4 00 00 00       	jmp    0x100e10c4
100e0ff0:	c7 45 d4 46 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x46
100e0ff7:	e9 c8 00 00 00       	jmp    0x100e10c4
100e0ffc:	81 ff 00 00 10 00    	cmp    edi,0x100000
100e1002:	74 2c                	je     0x100e1030
100e1004:	81 ff 00 00 20 00    	cmp    edi,0x200000
100e100a:	74 18                	je     0x100e1024
100e100c:	81 ff 00 00 40 00    	cmp    edi,0x400000
100e1012:	0f 85 35 06 00 00    	jne    0x100e164d
100e1018:	c7 45 d4 49 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x49
100e101f:	e9 a0 00 00 00       	jmp    0x100e10c4
100e1024:	c7 45 d4 48 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x48
100e102b:	e9 94 00 00 00       	jmp    0x100e10c4
100e1030:	c7 45 d4 47 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x47
100e1037:	e9 88 00 00 00       	jmp    0x100e10c4
100e103c:	c7 45 d4 4a 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x4a
100e1043:	eb 7f                	jmp    0x100e10c4
100e1045:	81 ff 00 00 00 08    	cmp    edi,0x8000000
100e104b:	7f 42                	jg     0x100e108f
100e104d:	74 37                	je     0x100e1086
100e104f:	81 ff 00 00 00 01    	cmp    edi,0x1000000
100e1055:	74 26                	je     0x100e107d
100e1057:	81 ff 00 00 00 02    	cmp    edi,0x2000000
100e105d:	74 15                	je     0x100e1074
100e105f:	81 ff 00 00 00 04    	cmp    edi,0x4000000
100e1065:	0f 85 e2 05 00 00    	jne    0x100e164d
100e106b:	c7 45 d4 4d 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x4d
100e1072:	eb 50                	jmp    0x100e10c4
100e1074:	c7 45 d4 4c 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x4c
100e107b:	eb 47                	jmp    0x100e10c4
100e107d:	c7 45 d4 4b 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x4b
100e1084:	eb 3e                	jmp    0x100e10c4
100e1086:	c7 45 d4 4e 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x4e
100e108d:	eb 35                	jmp    0x100e10c4
100e108f:	81 ff 00 00 00 10    	cmp    edi,0x10000000
100e1095:	74 26                	je     0x100e10bd
100e1097:	81 ff 00 00 00 20    	cmp    edi,0x20000000
100e109d:	74 15                	je     0x100e10b4
100e109f:	81 ff 00 00 00 40    	cmp    edi,0x40000000
100e10a5:	0f 85 a2 05 00 00    	jne    0x100e164d
100e10ab:	c7 45 d4 51 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x51
100e10b2:	eb 10                	jmp    0x100e10c4
100e10b4:	c7 45 d4 50 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x50
100e10bb:	eb 07                	jmp    0x100e10c4
100e10bd:	c7 45 d4 4f 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x4f
100e10c4:	68 c8 84 1a 10       	push   0x101a84c8
100e10c9:	53                   	push   ebx
100e10ca:	c7 45 d0 01 00 00 00 	mov    DWORD PTR [ebp-0x30],0x1
100e10d1:	e8 29 33 09 00       	call   0x101743ff
100e10d6:	8b f0                	mov    esi,eax
100e10d8:	83 c4 08             	add    esp,0x8
100e10db:	85 f6                	test   esi,esi
100e10dd:	0f 84 6a 05 00 00    	je     0x100e164d
100e10e3:	8b 45 d0             	mov    eax,DWORD PTR [ebp-0x30]
100e10e6:	3b 45 d4             	cmp    eax,DWORD PTR [ebp-0x2c]
100e10e9:	0f 85 42 05 00 00    	jne    0x100e1631
100e10ef:	81 ff 00 80 00 00    	cmp    edi,0x8000
100e10f5:	0f 8f c5 02 00 00    	jg     0x100e13c0
100e10fb:	0f 84 9f 02 00 00    	je     0x100e13a0
100e1101:	81 ff 80 00 00 00    	cmp    edi,0x80
100e1107:	0f 8f 69 01 00 00    	jg     0x100e1276
100e110d:	0f 84 43 01 00 00    	je     0x100e1256
100e1113:	83 ff 08             	cmp    edi,0x8
100e1116:	0f 8f c7 00 00 00    	jg     0x100e11e3
100e111c:	0f 84 a1 00 00 00    	je     0x100e11c3
100e1122:	83 ff 02             	cmp    edi,0x2
100e1125:	7f 73                	jg     0x100e119a
100e1127:	74 51                	je     0x100e117a
100e1129:	81 ff 00 00 00 80    	cmp    edi,0x80000000
100e112f:	74 29                	je     0x100e115a
100e1131:	83 ff 01             	cmp    edi,0x1
100e1134:	0f 85 f7 04 00 00    	jne    0x100e1631
100e113a:	68 84 cd 1d 10       	push   0x101dcd84
100e113f:	56                   	push   esi
100e1140:	e8 ab e4 05 00       	call   0x1013f5f0
100e1145:	83 c4 08             	add    esp,0x8
100e1148:	85 c0                	test   eax,eax
100e114a:	0f 85 fd 04 00 00    	jne    0x100e164d
100e1150:	68 9c cd 1d 10       	push   0x101dcd9c
100e1155:	e9 ca 04 00 00       	jmp    0x100e1624
100e115a:	68 24 d3 1d 10       	push   0x101dd324
100e115f:	56                   	push   esi
100e1160:	e8 8b e4 05 00       	call   0x1013f5f0
100e1165:	83 c4 08             	add    esp,0x8
100e1168:	85 c0                	test   eax,eax
100e116a:	0f 85 dd 04 00 00    	jne    0x100e164d
100e1170:	68 3c d3 1d 10       	push   0x101dd33c
100e1175:	e9 aa 04 00 00       	jmp    0x100e1624
100e117a:	68 b4 cd 1d 10       	push   0x101dcdb4
100e117f:	56                   	push   esi
100e1180:	e8 6b e4 05 00       	call   0x1013f5f0
100e1185:	83 c4 08             	add    esp,0x8
100e1188:	85 c0                	test   eax,eax
100e118a:	0f 85 bd 04 00 00    	jne    0x100e164d
100e1190:	68 cc cd 1d 10       	push   0x101dcdcc
100e1195:	e9 8a 04 00 00       	jmp    0x100e1624
100e119a:	83 ff 04             	cmp    edi,0x4
100e119d:	0f 85 8e 04 00 00    	jne    0x100e1631
100e11a3:	68 e4 cd 1d 10       	push   0x101dcde4
100e11a8:	56                   	push   esi
100e11a9:	e8 42 e4 05 00       	call   0x1013f5f0
100e11ae:	83 c4 08             	add    esp,0x8
100e11b1:	85 c0                	test   eax,eax
100e11b3:	0f 85 94 04 00 00    	jne    0x100e164d
100e11b9:	68 fc cd 1d 10       	push   0x101dcdfc
100e11be:	e9 61 04 00 00       	jmp    0x100e1624
100e11c3:	68 14 ce 1d 10       	push   0x101dce14
100e11c8:	56                   	push   esi
100e11c9:	e8 22 e4 05 00       	call   0x1013f5f0
100e11ce:	83 c4 08             	add    esp,0x8
100e11d1:	85 c0                	test   eax,eax
100e11d3:	0f 85 74 04 00 00    	jne    0x100e164d
100e11d9:	68 2c ce 1d 10       	push   0x101dce2c
100e11de:	e9 41 04 00 00       	jmp    0x100e1624
100e11e3:	83 ff 10             	cmp    edi,0x10
100e11e6:	74 4e                	je     0x100e1236
100e11e8:	83 ff 20             	cmp    edi,0x20
100e11eb:	74 29                	je     0x100e1216
100e11ed:	83 ff 40             	cmp    edi,0x40
100e11f0:	0f 85 3b 04 00 00    	jne    0x100e1631
100e11f6:	68 74 ce 1d 10       	push   0x101dce74
100e11fb:	56                   	push   esi
100e11fc:	e8 ef e3 05 00       	call   0x1013f5f0
100e1201:	83 c4 08             	add    esp,0x8
100e1204:	85 c0                	test   eax,eax
100e1206:	0f 85 41 04 00 00    	jne    0x100e164d
100e120c:	68 8c ce 1d 10       	push   0x101dce8c
100e1211:	e9 0e 04 00 00       	jmp    0x100e1624
100e1216:	68 54 d3 1d 10       	push   0x101dd354
100e121b:	56                   	push   esi
100e121c:	e8 cf e3 05 00       	call   0x1013f5f0
100e1221:	83 c4 08             	add    esp,0x8
100e1224:	85 c0                	test   eax,eax
100e1226:	0f 85 21 04 00 00    	jne    0x100e164d
100e122c:	68 6c d3 1d 10       	push   0x101dd36c
100e1231:	e9 ee 03 00 00       	jmp    0x100e1624
100e1236:	68 44 ce 1d 10       	push   0x101dce44
100e123b:	56                   	push   esi
100e123c:	e8 af e3 05 00       	call   0x1013f5f0
100e1241:	83 c4 08             	add    esp,0x8
100e1244:	85 c0                	test   eax,eax
100e1246:	0f 85 01 04 00 00    	jne    0x100e164d
100e124c:	68 5c ce 1d 10       	push   0x101dce5c
100e1251:	e9 ce 03 00 00       	jmp    0x100e1624
100e1256:	68 a4 ce 1d 10       	push   0x101dcea4
100e125b:	56                   	push   esi
100e125c:	e8 8f e3 05 00       	call   0x1013f5f0
100e1261:	83 c4 08             	add    esp,0x8
100e1264:	85 c0                	test   eax,eax
100e1266:	0f 85 e1 03 00 00    	jne    0x100e164d
100e126c:	68 bc ce 1d 10       	push   0x101dcebc
100e1271:	e9 ae 03 00 00       	jmp    0x100e1624
100e1276:	81 ff 00 08 00 00    	cmp    edi,0x800
100e127c:	0f 8f a2 00 00 00    	jg     0x100e1324
100e1282:	0f 84 7c 00 00 00    	je     0x100e1304
100e1288:	81 ff 00 01 00 00    	cmp    edi,0x100
100e128e:	74 54                	je     0x100e12e4
100e1290:	81 ff 00 02 00 00    	cmp    edi,0x200
100e1296:	74 2c                	je     0x100e12c4
100e1298:	81 ff 00 04 00 00    	cmp    edi,0x400
100e129e:	0f 85 8d 03 00 00    	jne    0x100e1631
100e12a4:	68 34 cf 1d 10       	push   0x101dcf34
100e12a9:	56                   	push   esi
100e12aa:	e8 41 e3 05 00       	call   0x1013f5f0
100e12af:	83 c4 08             	add    esp,0x8
100e12b2:	85 c0                	test   eax,eax
100e12b4:	0f 85 93 03 00 00    	jne    0x100e164d
100e12ba:	68 4c cf 1d 10       	push   0x101dcf4c
100e12bf:	e9 60 03 00 00       	jmp    0x100e1624
100e12c4:	68 04 cf 1d 10       	push   0x101dcf04
100e12c9:	56                   	push   esi
100e12ca:	e8 21 e3 05 00       	call   0x1013f5f0
100e12cf:	83 c4 08             	add    esp,0x8
100e12d2:	85 c0                	test   eax,eax
100e12d4:	0f 85 73 03 00 00    	jne    0x100e164d
100e12da:	68 1c cf 1d 10       	push   0x101dcf1c
100e12df:	e9 40 03 00 00       	jmp    0x100e1624
100e12e4:	68 d4 ce 1d 10       	push   0x101dced4
100e12e9:	56                   	push   esi
100e12ea:	e8 01 e3 05 00       	call   0x1013f5f0
100e12ef:	83 c4 08             	add    esp,0x8
100e12f2:	85 c0                	test   eax,eax
100e12f4:	0f 85 53 03 00 00    	jne    0x100e164d
100e12fa:	68 ec ce 1d 10       	push   0x101dceec
100e12ff:	e9 20 03 00 00       	jmp    0x100e1624
100e1304:	68 64 cf 1d 10       	push   0x101dcf64
100e1309:	56                   	push   esi
100e130a:	e8 e1 e2 05 00       	call   0x1013f5f0
100e130f:	83 c4 08             	add    esp,0x8
100e1312:	85 c0                	test   eax,eax
100e1314:	0f 85 33 03 00 00    	jne    0x100e164d
100e131a:	68 7c cf 1d 10       	push   0x101dcf7c
100e131f:	e9 00 03 00 00       	jmp    0x100e1624
100e1324:	81 ff 00 10 00 00    	cmp    edi,0x1000
100e132a:	74 54                	je     0x100e1380
100e132c:	81 ff 00 20 00 00    	cmp    edi,0x2000
100e1332:	74 2c                	je     0x100e1360
100e1334:	81 ff 00 40 00 00    	cmp    edi,0x4000
100e133a:	0f 85 f1 02 00 00    	jne    0x100e1631
100e1340:	68 f4 cf 1d 10       	push   0x101dcff4
100e1345:	56                   	push   esi
100e1346:	e8 a5 e2 05 00       	call   0x1013f5f0
100e134b:	83 c4 08             	add    esp,0x8
100e134e:	85 c0                	test   eax,eax
100e1350:	0f 85 f7 02 00 00    	jne    0x100e164d
100e1356:	68 0c d0 1d 10       	push   0x101dd00c
100e135b:	e9 c4 02 00 00       	jmp    0x100e1624
100e1360:	68 c4 cf 1d 10       	push   0x101dcfc4
100e1365:	56                   	push   esi
100e1366:	e8 85 e2 05 00       	call   0x1013f5f0
100e136b:	83 c4 08             	add    esp,0x8
100e136e:	85 c0                	test   eax,eax
100e1370:	0f 85 d7 02 00 00    	jne    0x100e164d
100e1376:	68 dc cf 1d 10       	push   0x101dcfdc
100e137b:	e9 a4 02 00 00       	jmp    0x100e1624
100e1380:	68 94 cf 1d 10       	push   0x101dcf94
100e1385:	56                   	push   esi
100e1386:	e8 65 e2 05 00       	call   0x1013f5f0
100e138b:	83 c4 08             	add    esp,0x8
100e138e:	85 c0                	test   eax,eax
100e1390:	0f 85 b7 02 00 00    	jne    0x100e164d
100e1396:	68 ac cf 1d 10       	push   0x101dcfac
100e139b:	e9 84 02 00 00       	jmp    0x100e1624
100e13a0:	68 24 d0 1d 10       	push   0x101dd024
100e13a5:	56                   	push   esi
100e13a6:	e8 45 e2 05 00       	call   0x1013f5f0
100e13ab:	83 c4 08             	add    esp,0x8
100e13ae:	85 c0                	test   eax,eax
100e13b0:	0f 85 97 02 00 00    	jne    0x100e164d
100e13b6:	68 3c d0 1d 10       	push   0x101dd03c
100e13bb:	e9 64 02 00 00       	jmp    0x100e1624
100e13c0:	81 ff 00 00 80 00    	cmp    edi,0x800000
100e13c6:	0f 8f 50 01 00 00    	jg     0x100e151c
100e13cc:	0f 84 2a 01 00 00    	je     0x100e14fc
100e13d2:	81 ff 00 00 08 00    	cmp    edi,0x80000
100e13d8:	0f 8f a2 00 00 00    	jg     0x100e1480
100e13de:	0f 84 7c 00 00 00    	je     0x100e1460
100e13e4:	81 ff 00 00 01 00    	cmp    edi,0x10000
100e13ea:	74 54                	je     0x100e1440
100e13ec:	81 ff 00 00 02 00    	cmp    edi,0x20000
100e13f2:	74 2c                	je     0x100e1420
100e13f4:	81 ff 00 00 04 00    	cmp    edi,0x40000
100e13fa:	0f 85 31 02 00 00    	jne    0x100e1631
100e1400:	68 b4 d0 1d 10       	push   0x101dd0b4
100e1405:	56                   	push   esi
100e1406:	e8 e5 e1 05 00       	call   0x1013f5f0
100e140b:	83 c4 08             	add    esp,0x8
100e140e:	85 c0                	test   eax,eax
100e1410:	0f 85 37 02 00 00    	jne    0x100e164d
100e1416:	68 cc d0 1d 10       	push   0x101dd0cc
100e141b:	e9 04 02 00 00       	jmp    0x100e1624
100e1420:	68 84 d0 1d 10       	push   0x101dd084
100e1425:	56                   	push   esi
100e1426:	e8 c5 e1 05 00       	call   0x1013f5f0
100e142b:	83 c4 08             	add    esp,0x8
100e142e:	85 c0                	test   eax,eax
100e1430:	0f 85 17 02 00 00    	jne    0x100e164d
100e1436:	68 9c d0 1d 10       	push   0x101dd09c
100e143b:	e9 e4 01 00 00       	jmp    0x100e1624
100e1440:	68 54 d0 1d 10       	push   0x101dd054
100e1445:	56                   	push   esi
100e1446:	e8 a5 e1 05 00       	call   0x1013f5f0
100e144b:	83 c4 08             	add    esp,0x8
100e144e:	85 c0                	test   eax,eax
100e1450:	0f 85 f7 01 00 00    	jne    0x100e164d
100e1456:	68 6c d0 1d 10       	push   0x101dd06c
100e145b:	e9 c4 01 00 00       	jmp    0x100e1624
100e1460:	68 e4 d0 1d 10       	push   0x101dd0e4
100e1465:	56                   	push   esi
100e1466:	e8 85 e1 05 00       	call   0x1013f5f0
100e146b:	83 c4 08             	add    esp,0x8
100e146e:	85 c0                	test   eax,eax
100e1470:	0f 85 d7 01 00 00    	jne    0x100e164d
100e1476:	68 fc d0 1d 10       	push   0x101dd0fc
100e147b:	e9 a4 01 00 00       	jmp    0x100e1624
100e1480:	81 ff 00 00 10 00    	cmp    edi,0x100000
100e1486:	74 54                	je     0x100e14dc
100e1488:	81 ff 00 00 20 00    	cmp    edi,0x200000
100e148e:	74 2c                	je     0x100e14bc
100e1490:	81 ff 00 00 40 00    	cmp    edi,0x400000
100e1496:	0f 85 95 01 00 00    	jne    0x100e1631
100e149c:	68 74 d1 1d 10       	push   0x101dd174
100e14a1:	56                   	push   esi
100e14a2:	e8 49 e1 05 00       	call   0x1013f5f0
100e14a7:	83 c4 08             	add    esp,0x8
100e14aa:	85 c0                	test   eax,eax
100e14ac:	0f 85 9b 01 00 00    	jne    0x100e164d
100e14b2:	68 8c d1 1d 10       	push   0x101dd18c
100e14b7:	e9 68 01 00 00       	jmp    0x100e1624
100e14bc:	68 44 d1 1d 10       	push   0x101dd144
100e14c1:	56                   	push   esi
100e14c2:	e8 29 e1 05 00       	call   0x1013f5f0
100e14c7:	83 c4 08             	add    esp,0x8
100e14ca:	85 c0                	test   eax,eax
100e14cc:	0f 85 7b 01 00 00    	jne    0x100e164d
100e14d2:	68 5c d1 1d 10       	push   0x101dd15c
100e14d7:	e9 48 01 00 00       	jmp    0x100e1624
100e14dc:	68 14 d1 1d 10       	push   0x101dd114
100e14e1:	56                   	push   esi
100e14e2:	e8 09 e1 05 00       	call   0x1013f5f0
100e14e7:	83 c4 08             	add    esp,0x8
100e14ea:	85 c0                	test   eax,eax
100e14ec:	0f 85 5b 01 00 00    	jne    0x100e164d
100e14f2:	68 2c d1 1d 10       	push   0x101dd12c
100e14f7:	e9 28 01 00 00       	jmp    0x100e1624
100e14fc:	68 a4 d1 1d 10       	push   0x101dd1a4
100e1501:	56                   	push   esi
100e1502:	e8 e9 e0 05 00       	call   0x1013f5f0
100e1507:	83 c4 08             	add    esp,0x8
100e150a:	85 c0                	test   eax,eax
100e150c:	0f 85 3b 01 00 00    	jne    0x100e164d
100e1512:	68 bc d1 1d 10       	push   0x101dd1bc
100e1517:	e9 08 01 00 00       	jmp    0x100e1624
100e151c:	81 ff 00 00 00 08    	cmp    edi,0x8000000
100e1522:	0f 8f 9b 00 00 00    	jg     0x100e15c3
100e1528:	74 7c                	je     0x100e15a6
100e152a:	81 ff 00 00 00 01    	cmp    edi,0x1000000
100e1530:	74 54                	je     0x100e1586
100e1532:	81 ff 00 00 00 02    	cmp    edi,0x2000000
100e1538:	74 2c                	je     0x100e1566
100e153a:	81 ff 00 00 00 04    	cmp    edi,0x4000000
100e1540:	0f 85 eb 00 00 00    	jne    0x100e1631
100e1546:	68 34 d2 1d 10       	push   0x101dd234
100e154b:	56                   	push   esi
100e154c:	e8 9f e0 05 00       	call   0x1013f5f0
100e1551:	83 c4 08             	add    esp,0x8
100e1554:	85 c0                	test   eax,eax
100e1556:	0f 85 f1 00 00 00    	jne    0x100e164d
100e155c:	68 4c d2 1d 10       	push   0x101dd24c
100e1561:	e9 be 00 00 00       	jmp    0x100e1624
100e1566:	68 04 d2 1d 10       	push   0x101dd204
100e156b:	56                   	push   esi
100e156c:	e8 7f e0 05 00       	call   0x1013f5f0
100e1571:	83 c4 08             	add    esp,0x8
100e1574:	85 c0                	test   eax,eax
100e1576:	0f 85 d1 00 00 00    	jne    0x100e164d
100e157c:	68 1c d2 1d 10       	push   0x101dd21c
100e1581:	e9 9e 00 00 00       	jmp    0x100e1624
100e1586:	68 d4 d1 1d 10       	push   0x101dd1d4
100e158b:	56                   	push   esi
100e158c:	e8 5f e0 05 00       	call   0x1013f5f0
100e1591:	83 c4 08             	add    esp,0x8
100e1594:	85 c0                	test   eax,eax
100e1596:	0f 85 b1 00 00 00    	jne    0x100e164d
100e159c:	68 ec d1 1d 10       	push   0x101dd1ec
100e15a1:	e9 7e 00 00 00       	jmp    0x100e1624
100e15a6:	68 64 d2 1d 10       	push   0x101dd264
100e15ab:	56                   	push   esi
100e15ac:	e8 3f e0 05 00       	call   0x1013f5f0
100e15b1:	83 c4 08             	add    esp,0x8
100e15b4:	85 c0                	test   eax,eax
100e15b6:	0f 85 91 00 00 00    	jne    0x100e164d
100e15bc:	68 7c d2 1d 10       	push   0x101dd27c
100e15c1:	eb 61                	jmp    0x100e1624
100e15c3:	81 ff 00 00 00 10    	cmp    edi,0x10000000
100e15c9:	74 42                	je     0x100e160d
100e15cb:	81 ff 00 00 00 20    	cmp    edi,0x20000000
100e15d1:	74 21                	je     0x100e15f4
100e15d3:	81 ff 00 00 00 40    	cmp    edi,0x40000000
100e15d9:	75 56                	jne    0x100e1631
100e15db:	68 f4 d2 1d 10       	push   0x101dd2f4
100e15e0:	56                   	push   esi
100e15e1:	e8 0a e0 05 00       	call   0x1013f5f0
100e15e6:	83 c4 08             	add    esp,0x8
100e15e9:	85 c0                	test   eax,eax
100e15eb:	75 60                	jne    0x100e164d
100e15ed:	68 0c d3 1d 10       	push   0x101dd30c
100e15f2:	eb 30                	jmp    0x100e1624
100e15f4:	68 c4 d2 1d 10       	push   0x101dd2c4
100e15f9:	56                   	push   esi
100e15fa:	e8 f1 df 05 00       	call   0x1013f5f0
100e15ff:	83 c4 08             	add    esp,0x8
100e1602:	85 c0                	test   eax,eax
100e1604:	75 47                	jne    0x100e164d
100e1606:	68 dc d2 1d 10       	push   0x101dd2dc
100e160b:	eb 17                	jmp    0x100e1624
100e160d:	68 94 d2 1d 10       	push   0x101dd294
100e1612:	56                   	push   esi
100e1613:	e8 d8 df 05 00       	call   0x1013f5f0
100e1618:	83 c4 08             	add    esp,0x8
100e161b:	85 c0                	test   eax,eax
100e161d:	75 2e                	jne    0x100e164d
100e161f:	68 ac d2 1d 10       	push   0x101dd2ac
100e1624:	56                   	push   esi
100e1625:	e8 c6 df 05 00       	call   0x1013f5f0
100e162a:	83 c4 08             	add    esp,0x8
100e162d:	85 c0                	test   eax,eax
100e162f:	75 44                	jne    0x100e1675
100e1631:	ff 45 d0             	inc    DWORD PTR [ebp-0x30]
100e1634:	68 c8 84 1a 10       	push   0x101a84c8
100e1639:	6a 00                	push   0x0
100e163b:	e8 bf 2d 09 00       	call   0x101743ff
100e1640:	8b f0                	mov    esi,eax
100e1642:	83 c4 08             	add    esp,0x8
100e1645:	85 f6                	test   esi,esi
100e1647:	0f 85 96 fa ff ff    	jne    0x100e10e3
100e164d:	53                   	push   ebx
100e164e:	ff 15 c8 30 22 10    	call   DWORD PTR ds:0x102230c8
100e1654:	83 c4 04             	add    esp,0x4
100e1657:	32 c0                	xor    al,al
100e1659:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
100e165c:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100e1663:	59                   	pop    ecx
100e1664:	5f                   	pop    edi
100e1665:	5e                   	pop    esi
100e1666:	5b                   	pop    ebx
100e1667:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
100e166a:	33 cd                	xor    ecx,ebp
100e166c:	e8 42 c5 05 00       	call   0x1013dbb3
100e1671:	8b e5                	mov    esp,ebp
100e1673:	5d                   	pop    ebp
100e1674:	c3                   	ret
100e1675:	53                   	push   ebx
100e1676:	ff 15 c8 30 22 10    	call   DWORD PTR ds:0x102230c8
100e167c:	83 c4 04             	add    esp,0x4
100e167f:	b0 01                	mov    al,0x1
100e1681:	eb d6                	jmp    0x100e1659
